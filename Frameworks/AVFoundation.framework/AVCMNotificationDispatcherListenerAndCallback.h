/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class AVWeakReference;

@interface AVCMNotificationDispatcherListenerAndCallback : NSObject  {
    AVWeakReference *_weakReferenceToListener;
    int (*_callback)();
}

@property(readonly) id listener;
@property(readonly) int (* callback;


- (int (*)())callback;
- (id)initWithWeakReferenceToListener:(id)arg1 callback:(int (*)())arg2;
- (void)dealloc;
- (id)listener;

@end
