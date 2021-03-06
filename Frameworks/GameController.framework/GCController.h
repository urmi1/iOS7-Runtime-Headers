/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameController.framework/GameController
 */

@class GCGamepad, <GCNamedProfile>, NSString, GCExtendedGamepad;

@interface GCController : NSObject  {
}

@property(copy) id controllerPausedHandler;
@property(readonly) NSString * vendorName;
@property(getter=isAttachedToDevice,readonly) BOOL attachedToDevice;
@property int playerIndex;
@property(readonly) GCGamepad * gamepad;
@property(readonly) GCExtendedGamepad * extendedGamepad;
@property(retain) <GCNamedProfile> * profile;
@property(readonly) struct __IOHIDDevice { }* deviceRef;
@property(readonly) unsigned int service;

+ (void)stopWirelessControllerDiscovery;
+ (void)startWirelessControllerDiscoveryWithCompletionHandler:(id)arg1;
+ (void)__setLogger__:(id)arg1;
+ (void)__open__;
+ (id)controllers;

- (struct __IOHIDDevice { }*)deviceRef;
- (id)extendedGamepad;
- (id)gamepad;
- (int)playerIndex;
- (BOOL)isAttachedToDevice;
- (void)setControllerPausedHandler:(id)arg1;
- (id)controllerPausedHandler;
- (void)setPlayerIndex:(int)arg1;
- (unsigned int)service;
- (void)setProfile:(id)arg1;
- (id)profile;
- (id)vendorName;

@end
