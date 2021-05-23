/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class AVAsset, AVURLAsset, LPVideoProperties, NSData, NSItemProvider, NSString, NSURL;

@protocol OS_dispatch_group, OS_dispatch_queue;

@interface LPVideo : NSObject

{
    NSData *_data;
    NSObject<OS_dispatch_queue> *_mediaLoadingQueue;
    NSItemProvider *_itemProvider;
    LPVideo *_videoLoadedFromItemProvider;
    NSObject<OS_dispatch_group> *_itemProviderLoadGroup;
    struct CGSize _intrinsicSize;
    AVURLAsset *_asset;
    id _mediaServicesResetNotificationHandler;
    LPVideoProperties *_properties;
    NSURL *_streamingURL;
    NSURL *_youTubeURL;
    NSString *_MIMEType;
    NSURL *_fileURL;
}

@property (nonatomic, readonly) unsigned long long _encodedSize;
@property (nonatomic, readonly) struct CGSize _intrinsicSize;
@property (nonatomic, readonly) AVAsset *_asset;
@property (retain, nonatomic, readonly) NSItemProvider *_itemProvider;
@property (retain, nonatomic) NSURL *fileURL;
@property (retain, nonatomic, readonly) NSURL *streamingURL;
@property (retain, nonatomic, readonly) NSURL *youTubeURL;
@property (copy, nonatomic, readonly) NSData *data;
@property (copy, nonatomic, readonly) NSString *MIMEType;
@property (nonatomic, readonly) _Bool hasAudio;
@property (copy, nonatomic, readonly) LPVideoProperties *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (id)initWithYouTubeURL:(id)arg1 properties:(id)arg2;
- (id)initWithStreamingURL:(id)arg1 properties:(id)arg2;
- (id)initWithData:(id)arg1 MIMEType:(id)arg2 properties:(id)arg3;
- (id)initByReferencingFileURL:(id)arg1 MIMEType:(id)arg2 properties:(id)arg3;
- (_Bool)_shouldEncodeData;
- (void)_mapDataFromFileURL;
- (_Bool)needsAsynchronousLoad;
- (void)loadAsynchronouslyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithItemProvider:(id)arg1 properties:(id)arg2;
- (id)initWithYouTubeURL:(id)arg1;
- (id)initWithStreamingURL:(id)arg1 hasAudio:(_Bool)arg2;
- (void)_uninstallMediaServicesResetNotificationHandler;
- (id)initWithData:(id)arg1 MIMEType:(id)arg2 hasAudio:(_Bool)arg3;
- (void)_installMediaServicesResetNotificationHandler;
- (id)_initWithVideo:(id)arg1;
- (id)initByReferencingFileURL:(id)arg1 MIMEType:(id)arg2 hasAudio:(_Bool)arg3;

@end
