/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSNetworkSettingsInternal;

@interface NSNetworkSettings : NSObject  {
    NSNetworkSettingsInternal *_internal;
}

+ (id)sharedNetworkSettings;

- (id)init;
- (void)dealloc;
- (void)setProxyDictionary:(id)arg1;
- (BOOL)connectedToInternet:(BOOL)arg1;
- (void)setProxyPropertiesForURL:(id)arg1 onStream:(struct __CFReadStream { }*)arg2;
- (BOOL)isProxyNeededForURL:(id)arg1;
- (id)proxyPropertiesForURL:(id)arg1;
- (void)_listenForProxySettingChanges;
- (void)_updateProxySettings;
- (id)proxyDictionary;
- (id)_init;

@end
