/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, PLManagedAlbum, PLPhotoLibrary, UIViewController;

@protocol PUVideoTrimQueueControllerDelegate;

@interface PUVideoTrimQueueController : NSObject

{
    UIViewController *_displayingViewController;
    double _startTime;
    double _endTime;
    NSMutableArray *_sourcesToTransform;
    NSMutableArray *_trimQueue;
    NSMutableDictionary *_trimmedVideoInfo;
    struct {
        unsigned int hasWillTrim:1;
        unsigned int hasDidTrim:1;
        unsigned int hasDidFinish:1;
        unsigned int hasDidCancel:1;
    } _delegateFlags;
    PLPhotoLibrary *_photoLibrary;
    id <PUVideoTrimQueueControllerDelegate> _delegate;
    NSArray *_videosSources;
    NSDictionary *_videosSourcesSharingInfo;
    NSDictionary *_customExportsInfo;
    PLManagedAlbum *_album;
    NSString *_albumName;
    NSArray *_recipients;
    NSString *_commentText;
}

@property (weak, nonatomic) id <PUVideoTrimQueueControllerDelegate> delegate;
@property (nonatomic, readonly) NSArray *videosSources;
@property (nonatomic, readonly) NSDictionary *videosSourcesSharingInfo;
@property (nonatomic, readonly) NSDictionary *customExportsInfo;
@property (nonatomic, readonly) NSDictionary *trimmedVideoInfo;
@property (nonatomic, readonly) PLManagedAlbum *album;
@property (retain, nonatomic) NSString *albumName;
@property (retain, nonatomic) NSArray *recipients;
@property (retain, nonatomic) NSString *commentText;

+ (_Bool)areVideoSourcesStreamShareSources:(id)arg1;
+ (id)videoInfoKeyForSource:(id)arg1;
+ (double)durationFromVideoAtURL:(id)arg1;
+ (id)photoLibraryFromSources:(id)arg1 album:(id)arg2;

- (void)start;
- (void)editVideoViewControllerDidCancel:(id)arg1;
- (void)editVideoViewController:(id)arg1 didTrimVideoWithOptions:(id)arg2;
- (void)cleanupResources;
- (id)initWithViewController:(id)arg1 photoLibrary:(id)arg2 videoSources:(id)arg3 videoSourcesSharingInfo:(id)arg4 customExportsInfo:(id)arg5 album:(id)arg6;
- (void)_showTrimViewControllerForSource:(id)arg1;
- (id)alternateSourceToUseIfNeededFromSource:(id)arg1;
- (_Bool)_shouldShowVideoTooLongAlertForVideoSource:(id)arg1;
- (void)_dequeueTrimmingControl;
- (id)_videoTooLongAlertController;
- (void)_trimVideoSource:(id)arg1;
- (void)_sendDidFinish;

@end
