/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@class _IDSService, NSSet, NSArray;

@interface IDSService : NSObject  {
    _IDSService *_internal;
}

@property(readonly) NSSet * accounts;
@property(readonly) NSArray * devices;
@property(readonly) _IDSService * _internal;


- (BOOL)sendMessage:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (BOOL)sendServerMessage:(id)arg1 command:(id)arg2 fromAccount:(id)arg3;
- (BOOL)sendMessage:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(int)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7;
- (id)initWithService:(id)arg1 commands:(id)arg2;
- (id)_internal;
- (id)initWithService:(id)arg1;
- (void)requestKeepAlive;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)devices;
- (id)accounts;
- (void)removeDelegate:(id)arg1;
- (void)dealloc;

@end
