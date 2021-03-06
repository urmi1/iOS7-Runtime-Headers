/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class PFUbiquityStoreSaveSnapshot, PFUbiquityTransactionLog, PFUbiquityPeer, _PFUbiquityStack, PFUbiquitySwitchboardCacheWrapper, PFUbiquityStoreMetadata, NSString, NSDictionary, PFUbiquityKnowledgeVector, NSMutableDictionary;

@interface PFUbiquityImportContext : NSObject  {
    _PFUbiquityStack *_stack;
    PFUbiquityStoreMetadata *_storeMetadata;
    PFUbiquityPeer *_actingPeer;
    PFUbiquityKnowledgeVector *_kv;
    PFUbiquityKnowledgeVector *_currentKnowledgeVector;
    NSString *_exportingPeerID;
    PFUbiquityTransactionLog *_transactionLog;
    PFUbiquityStoreSaveSnapshot *_storeSaveSnapshot;
    NSDictionary *_globalIDToLocalIDURICache;
    NSMutableDictionary *_globalIDToFetchedObject;
    PFUbiquitySwitchboardCacheWrapper *_cacheWrapper;
}

@property(retain) _PFUbiquityStack * stack;
@property(retain) PFUbiquityStoreMetadata * storeMetadata;
@property(readonly) PFUbiquityPeer * actingPeer;
@property(retain) PFUbiquityKnowledgeVector * knowledgeVector;
@property(retain) PFUbiquityKnowledgeVector * currentKnowledgeVector;
@property(retain) NSString * exportingPeerID;
@property(retain) PFUbiquityTransactionLog * transactionLog;
@property(retain) PFUbiquityStoreSaveSnapshot * storeSaveSnapshot;
@property(retain) NSDictionary * globalIDToLocalIDURICache;
@property(retain) PFUbiquitySwitchboardCacheWrapper * cacheWrapper;
@property(readonly) NSMutableDictionary * globalIDToFetchedObject;


- (id)initWithStoreName:(id)arg1 andUbiquityRootLocation:(id)arg2 withLocalPeerID:(id)arg3;
- (void)setActingPeer:(id)arg1;
- (id)storeMetadata;
- (id)actingPeer;
- (id)currentKnowledgeVector;
- (id)globalIDToFetchedObject;
- (id)globalIDToLocalIDURICache;
- (id)stack;
- (void)setCurrentKnowledgeVector:(id)arg1;
- (void)setKnowledgeVector:(id)arg1;
- (id)knowledgeVector;
- (id)storeSaveSnapshot;
- (void)setStoreSaveSnapshot:(id)arg1;
- (void)setExportingPeerID:(id)arg1;
- (id)exportingPeerID;
- (void)setStoreMetadata:(id)arg1;
- (void)setStack:(id)arg1;
- (void)setCacheWrapper:(id)arg1;
- (id)initWithStack:(id)arg1 andStoreMetadata:(id)arg2;
- (BOOL)prefetchManagedObjectsInContext:(id)arg1 error:(id*)arg2;
- (void)setGlobalIDToLocalIDURICache:(id)arg1;
- (id)cacheWrapper;
- (id)transactionLog;
- (void)setTransactionLog:(id)arg1;
- (id)init;
- (void)dealloc;

@end
