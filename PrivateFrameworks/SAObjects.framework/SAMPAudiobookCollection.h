/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAMPAudiobookCollection : SAMPCollection  {
}

@property(copy) NSString * artist;
@property(copy) NSString * sortArtist;

+ (id)audiobookCollectionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)audiobookCollection;

- (id)artist;
- (void)setArtist:(id)arg1;
- (id)sortArtist;
- (void)setSortArtist:(id)arg1;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
