--- a/drivers/net/wireless/ti/wlcore/wlcore.h
+++ b/drivers/net/wireless/ti/wlcore/wlcore.h
@@ -175,7 +175,9 @@
 	bool initialized;
 	struct ieee80211_hw *hw;
 	bool mac80211_registered;
-
+#if LINUX_VERSION_CODE < KERNEL_VERSION(2,6,31)
+	struct compat_threaded_irq irq_compat;
+#endif
 	struct device *dev;
 	struct platform_device *pdev;
 
