/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class NSString, NSMutableArray;

@interface ICCameraProperties : NSObject  {
    NSString *_volumePath;
    BOOL _ejectable;
    BOOL _beingEjected;
    BOOL _locked;
    BOOL _allowsSyncingClock;
    unsigned int _contentCatalogPercentCompleted;
    BOOL _batteryLevelAvailable;
    unsigned int _batteryLevel;
    NSMutableArray *_contents;
    NSMutableArray *_mediaFiles;
    NSMutableArray *_toBeNotifiedAddedItems;
    int _contentsLock;
    int _mediaFilesLock;
    double _timeOffset;
    unsigned int _estimatedNumberOfDownloadableItems;
    unsigned int _numberOfDownloadableItems;
    BOOL _contentReceived;
    double _downloadCancelTimestamp;
    struct dispatch_queue_s { } *_thumbnailFetchQ;
    struct dispatch_queue_s { } *_metadataFetchQ;
    struct dispatch_queue_s { } *_downloadQ;
    struct dispatch_queue_s { } *_generalQ;
    struct dispatch_semaphore_s { } *_deviceQSemaphore;
    BOOL _accessRestrictedAppleDevice;
}

@property(retain) NSString * volumePath;
@property BOOL ejectable;
@property BOOL beingEjected;
@property BOOL locked;
@property BOOL allowsSyncingClock;
@property unsigned int contentCatalogPercentCompleted;
@property BOOL batteryLevelAvailable;
@property unsigned int batteryLevel;
@property(retain) NSMutableArray * contents;
@property(retain) NSMutableArray * mediaFiles;
@property(retain) NSMutableArray * toBeNotifiedAddedItems;
@property int mediaFilesLock;
@property int contentsLock;
@property double timeOffset;
@property unsigned int estimatedNumberOfDownloadableItems;
@property unsigned int numberOfDownloadableItems;
@property BOOL contentReceived;
@property double downloadCancelTimestamp;
@property struct dispatch_queue_s { }* thumbnailFetchQ;
@property struct dispatch_queue_s { }* metadataFetchQ;
@property struct dispatch_queue_s { }* downloadQ;
@property struct dispatch_queue_s { }* generalQ;
@property struct dispatch_semaphore_s { }* deviceQSemaphore;
@property BOOL accessRestrictedAppleDevice;


- (void)setAccessRestrictedAppleDevice:(BOOL)arg1;
- (BOOL)accessRestrictedAppleDevice;
- (void)setDeviceQSemaphore:(struct dispatch_semaphore_s { }*)arg1;
- (struct dispatch_semaphore_s { }*)deviceQSemaphore;
- (void)setGeneralQ:(struct dispatch_queue_s { }*)arg1;
- (struct dispatch_queue_s { }*)generalQ;
- (void)setDownloadQ:(struct dispatch_queue_s { }*)arg1;
- (struct dispatch_queue_s { }*)downloadQ;
- (void)setMetadataFetchQ:(struct dispatch_queue_s { }*)arg1;
- (struct dispatch_queue_s { }*)metadataFetchQ;
- (void)setThumbnailFetchQ:(struct dispatch_queue_s { }*)arg1;
- (struct dispatch_queue_s { }*)thumbnailFetchQ;
- (void)setDownloadCancelTimestamp:(double)arg1;
- (double)downloadCancelTimestamp;
- (void)setContentReceived:(BOOL)arg1;
- (BOOL)contentReceived;
- (void)setNumberOfDownloadableItems:(unsigned int)arg1;
- (unsigned int)numberOfDownloadableItems;
- (void)setEstimatedNumberOfDownloadableItems:(unsigned int)arg1;
- (unsigned int)estimatedNumberOfDownloadableItems;
- (void)setContentsLock:(int)arg1;
- (int)contentsLock;
- (void)setMediaFilesLock:(int)arg1;
- (int)mediaFilesLock;
- (id)toBeNotifiedAddedItems;
- (id)mediaFiles;
- (void)setBatteryLevelAvailable:(BOOL)arg1;
- (BOOL)batteryLevelAvailable;
- (void)setContentCatalogPercentCompleted:(unsigned int)arg1;
- (unsigned int)contentCatalogPercentCompleted;
- (void)setAllowsSyncingClock:(BOOL)arg1;
- (BOOL)allowsSyncingClock;
- (BOOL)locked;
- (void)setBeingEjected:(BOOL)arg1;
- (BOOL)beingEjected;
- (void)setEjectable:(BOOL)arg1;
- (BOOL)ejectable;
- (id)volumePath;
- (void)unlockContents;
- (void)lockContents;
- (void)unlockMediaFiles;
- (void)lockMediaFiles;
- (void)setToBeNotifiedAddedItems:(id)arg1;
- (void)setMediaFiles:(id)arg1;
- (void)setVolumePath:(id)arg1;
- (void)setBatteryLevel:(unsigned int)arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setContents:(id)arg1;
- (id)contents;
- (double)timeOffset;
- (void)finalize;
- (void)dealloc;
- (unsigned int)batteryLevel;
- (void)setLocked:(BOOL)arg1;

@end
