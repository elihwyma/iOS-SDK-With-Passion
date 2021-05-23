/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHAssetCollection.h>

@class NSData, NSDate, NSString, NSURL, PHMomentSharePreview;

@interface PHMomentShare : PHAssetCollection

{
    NSDate *_creationDate;
    PHMomentSharePreview *_preview;
    _Bool _shouldIgnoreBudgets;
    _Bool _shouldNotifyOnUploadCompletion;
    unsigned short _status;
    short _mode;
    unsigned short _trashedState;
    short _publishState;
    unsigned long long _assetCount;
    unsigned long long _photosCount;
    unsigned long long _videosCount;
    unsigned long long _uploadedPhotosCount;
    unsigned long long _uploadedVideosCount;
    NSURL *_shareURL;
    NSDate *_expiryDate;
    NSData *_previewData;
    NSData *_thumbnailImageData;
    NSString *_scopeIdentifier;
}

@property (nonatomic, readonly) NSData *previewData;
@property (nonatomic, readonly) NSData *thumbnailImageData;
@property (nonatomic, readonly) NSString *scopeIdentifier;
@property (nonatomic, readonly) unsigned short status;
@property (nonatomic, readonly) short mode;
@property (nonatomic, readonly) unsigned short trashedState;
@property (nonatomic, readonly) short publishState;
@property (nonatomic, readonly) unsigned long long assetCount;
@property (nonatomic, readonly) unsigned long long photosCount;
@property (nonatomic, readonly) unsigned long long videosCount;
@property (nonatomic, readonly) unsigned long long uploadedPhotosCount;
@property (nonatomic, readonly) unsigned long long uploadedVideosCount;
@property (nonatomic, readonly) PHMomentSharePreview *preview;
@property (nonatomic, readonly) NSURL *shareURL;
@property (nonatomic, readonly) NSDate *expiryDate;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) _Bool shouldIgnoreBudgets;
@property (nonatomic, readonly) _Bool shouldNotifyOnUploadCompletion;

- (id)creationDate;
- (void)publishWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (Class)changeRequestClass;
- (_Bool)shouldPromptUserToIgnoreBudgets;
- (_Bool)shouldSuggestShareBack;
- (void)acceptShareWithCompletion:(CDUnknownBlockType)arg1;
- (void)forceSyncWithCompletion:(CDUnknownBlockType)arg1;

@end
