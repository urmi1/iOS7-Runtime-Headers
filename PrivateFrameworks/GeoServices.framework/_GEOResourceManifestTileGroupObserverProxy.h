/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSLock, NSObject<OS_dispatch_queue>, NSHashTable;

@interface _GEOResourceManifestTileGroupObserverProxy : NSObject  {
    NSHashTable *_observers;
    NSLock *_observersLock;
    NSObject<OS_dispatch_queue> *_queue;
}

@property NSObject<OS_dispatch_queue> * queue;


- (void)forEachObserver:(id)arg1 finished:(id)arg2;
- (unsigned int)observersCount;
- (void)setQueue:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)description;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)queue;

@end
