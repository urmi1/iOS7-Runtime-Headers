/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@class NSArray;

@interface AVAudioSessionRouteDescription : NSObject  {
    void *_impl;
}

@property(readonly) NSArray * inputs;
@property(readonly) NSArray * outputs;

+ (id)privateCreateOrConfigure:(id)arg1 withRawDescription:(id)arg2;

- (BOOL)matchesRawDescription:(id)arg1;
- (BOOL)isEqualToRoute:(id)arg1;
- (struct RouteDescriptionImpl { id x1; id x2; }*)privateGetImplementation;
- (id)outputs;
- (id)inputs;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)description;

@end