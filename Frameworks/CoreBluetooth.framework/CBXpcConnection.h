/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class NSObject<OS_xpc_object>, NSObject<OS_dispatch_semaphore>, NSObject<OS_dispatch_queue>, <CBXpcConnectionDelegate>, NSRecursiveLock, NSMutableDictionary;

@interface CBXpcConnection : NSObject  {
    <CBXpcConnectionDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_options;
    int _type;
    NSRecursiveLock *_delegateLock;
    NSObject<OS_dispatch_semaphore> *_xpcSendBarrier;
    NSObject<OS_xpc_object> *_xpcConnection;
}

@property <CBXpcConnectionDelegate> * delegate;


- (id)nsObjectWithXpcObject:(id)arg1;
- (id)nsArrayWithXpcArray:(id)arg1;
- (id)allocXpcObjectWithNSObject:(id)arg1;
- (id)allocXpcArrayWithNSArray:(id)arg1;
- (void)handleInvalid;
- (void)handleReset;
- (id)nsDictionaryFromXpcDictionary:(id)arg1;
- (id)allocXpcMsg:(int)arg1 args:(id)arg2;
- (id)allocXpcDictionaryWithNSDictionary:(id)arg1;
- (void)sendAsyncMsg:(int)arg1 args:(id)arg2;
- (void)checkOut;
- (void)checkIn;
- (void)handleConnectionEvent:(id)arg1;
- (void)handleMsg:(int)arg1 args:(id)arg2;
- (BOOL)isMainQueue;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3 sessionType:(int)arg4;
- (id)sendSyncMsg:(int)arg1 args:(id)arg2;
- (void)sendMsg:(int)arg1 args:(id)arg2;
- (void)disconnect;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;

@end
