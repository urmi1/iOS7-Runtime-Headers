/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSMutableDictionary, NSString, <SKUIMissingItemDelegate>, SKUIResourceLoader;

@interface SKUIMissingItemLoader : NSObject <SKUIItemRequestDelegate> {
    int _batchSize;
    <SKUIMissingItemDelegate> *_delegate;
    NSString *_imageProfile;
    NSString *_keyProfile;
    SKUIResourceLoader *_loader;
    NSMutableDictionary *_requests;
}

@property int batchSize;
@property(copy) NSString * imageProfile;
@property(copy) NSString * keyProfile;
@property <SKUIMissingItemDelegate> * delegate;


- (void)_requestItems:(id)arg1 withReason:(int)arg2;
- (id)_existingRequestIDForItemID:(id)arg1;
- (void)loadItemsWithIdentifiers:(id)arg1 reason:(int)arg2;
- (void)itemRequest:(id)arg1 didFinishWithItems:(id)arg2;
- (void)setImageProfile:(id)arg1;
- (id)imageProfile;
- (id)initWithResourceLoader:(id)arg1;
- (void)loadItemsForPageComponent:(id)arg1 startIndex:(int)arg2 reason:(int)arg3;
- (void)setBatchSize:(int)arg1;
- (int)batchSize;
- (void)setKeyProfile:(id)arg1;
- (id)keyProfile;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
- (id)delegate;

@end
