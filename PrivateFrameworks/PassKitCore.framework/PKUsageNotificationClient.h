/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSXPCListener, NSMutableSet;

@interface PKUsageNotificationClient : NSObject <NSXPCListenerDelegate, PKUsageNotificationClientInterface> {
    NSXPCListener *_listener;
    NSMutableSet *_connections;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _handler;

}


- (void)setPassUsageHandler:(id)arg1;
- (void)passUsedFromSource:(int)arg1 withTypeIdentifier:(id)arg2 info:(id)arg3;
- (id)init;
- (void)dealloc;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
