/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaItemArtwork, NSString, NSArray, NSDate;

@interface MPMediaItem : MPMediaEntity  {
}

@property(readonly) BOOL mediaTypeCanSeedGenius;
@property(readonly) NSString * albumArtist;
@property(readonly) NSString * albumTitle;
@property(readonly) NSString * artist;
@property(readonly) MPMediaItemArtwork * artwork;
@property(readonly) double bookmarkTime;
@property(readonly) NSString * composer;
@property(readonly) NSString * genre;
@property(readonly) BOOL isRental;
@property(readonly) BOOL isITunesU;
@property(readonly) unsigned int mediaType;
@property(readonly) double playbackDuration;
@property(readonly) double startTime;
@property(readonly) double stopTime;
@property(readonly) NSString * podcastTitle;
@property unsigned int rating;
@property(readonly) NSDate * releaseDate;
@property(readonly) NSString * title;
@property(readonly) unsigned int year;
@property unsigned int skipCount;
@property unsigned int playCount;
@property unsigned int skipCountSinceSync;
@property unsigned int playCountSinceSync;
@property(copy) NSDate * lastPlayedDate;
@property(copy) NSDate * lastSkippedDate;
@property(copy) NSDate * dateAccessed;
@property BOOL hasBeenPlayed;
@property(readonly) BOOL rememberBookmarkTime;
@property(readonly) unsigned int albumTrackNumber;
@property(readonly) double effectiveStopTime;
@property(readonly) NSString * effectiveAlbumArtist;
@property(readonly) BOOL isUsableAsRepresentativeItem;
@property(readonly) NSArray * chapters;

+ (id)dynamicProperties;
+ (id)fallbackTitlePropertyForGroupingType:(int)arg1;
+ (BOOL)_isValidItemProperty:(id)arg1;
+ (id)persistentIDPropertyForGroupingType:(int)arg1;
+ (BOOL)canFilterByProperty:(id)arg1;
+ (void)_createFilterableDictionary;
+ (id)titlePropertyForGroupingType:(int)arg1;

- (id)artist;
- (id)effectiveAlbumArtist;
- (void)populateLocationPropertiesWithPath:(id)arg1;
- (id)chapters;
- (BOOL)existsInLibrary;
- (void)setRating:(unsigned int)arg1;
- (BOOL)MPSD_isDownloadInProgress;
- (BOOL)mediaTypeCanSeedGenius;
- (BOOL)MPSD_isDownloadable;
- (BOOL)isUsableAsRepresentativeItem;
- (void)gaplessHeuristicInfo:(unsigned int*)arg1 durationInSamples:(unsigned long long*)arg2 lastPacketsResync:(unsigned long long*)arg3 encodingDelay:(unsigned int*)arg4 encodingDrain:(unsigned int*)arg5;
- (unsigned int)countOfChaptersOfType:(int)arg1;
- (id)chapterOfType:(int)arg1 atTime:(double)arg2;
- (id)chapterOfType:(int)arg1 atIndex:(unsigned int)arg2;
- (BOOL)rememberBookmarkTime;
- (void)setHasBeenPlayed:(BOOL)arg1;
- (BOOL)hasBeenPlayed;
- (void)setLastSkippedDate:(id)arg1;
- (id)lastSkippedDate;
- (void)setSkipCountSinceSync:(unsigned int)arg1;
- (unsigned int)skipCountSinceSync;
- (void)setSkipCount:(unsigned int)arg1;
- (unsigned int)skipCount;
- (void)setDateAccessed:(id)arg1;
- (id)dateAccessed;
- (void)setLastPlayedDate:(id)arg1;
- (void)setPlayCountSinceSync:(unsigned int)arg1;
- (unsigned int)playCountSinceSync;
- (void)setPlayCount:(unsigned int)arg1;
- (unsigned int)playCount;
- (id)predicateForProperty:(id)arg1;
- (id)podcastTitle;
- (double)effectiveStopTime;
- (id)albumTitle;
- (id)_bestStoreURL;
- (void)updateDateAccessedToCurrentDateWithWriteCompletionBlock:(id)arg1;
- (BOOL)incrementPlayCountForStopTime:(double)arg1;
- (void)incrementPlayCountForPlayingToEnd;
- (void)incrementSkipCount;
- (void)noteWasPlayedToTime:(double)arg1 skipped:(BOOL)arg2;
- (void)markNominalAmountHasBeenPlayed;
- (BOOL)didSkipWithPlayedToTime:(double)arg1;
- (id)valuesForProperties:(id)arg1;
- (Class)itemArrayCoderPIDDataCodingClass;
- (id)_libraryLinkPlaylistName;
- (id)_libraryLinkArtist;
- (id)_libraryLinkKind;
- (id)chaptersOfType:(int)arg1;
- (double)playbackDuration;
- (id)_libraryLinkURL;
- (id)_directStoreURL;
- (id)initWithPersistentID:(unsigned long long)arg1;
- (id)artwork;
- (BOOL)isITunesU;
- (double)bookmarkTime;
- (id)albumArtist;
- (double)stopTime;
- (id)representativeItem;
- (unsigned int)albumTrackNumber;
- (id)composer;
- (unsigned int)rating;
- (BOOL)isRental;
- (id)genre;
- (id)releaseDate;
- (id)lastPlayedDate;
- (unsigned int)mediaType;
- (id)title;
- (unsigned int)year;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (double)startTime;
- (void)didReceiveMemoryWarning;
- (id)valueForProperty:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
