/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTAvatarConfigurationImageRenderer, AVTCoreModel, AVTImageStore, AVTUIEnvironment, NSArray;

@protocol AVTUILogger;

@interface AVTAvatarRecordImageGenerator : NSObject

{
    AVTImageStore *_imageStore;
    AVTAvatarConfigurationImageRenderer *_renderer;
    AVTCoreModel *_coreModel;
    NSArray *_scopes;
    id <AVTUILogger> _logger;
    AVTUIEnvironment *_environment;
}

@property (nonatomic, readonly) AVTImageStore *imageStore;
@property (nonatomic, readonly) AVTAvatarConfigurationImageRenderer *renderer;
@property (nonatomic, readonly) AVTCoreModel *coreModel;
@property (copy, nonatomic, readonly) NSArray *scopes;
@property (nonatomic, readonly) id <AVTUILogger> logger;
@property (nonatomic, readonly) AVTUIEnvironment *environment;

+ (id)supportedScopesForScale:(double)arg1;

- (_Bool)generateThumbnailForAvatarRecordItem:(id)arg1 avatarConfiguration:(id)arg2 scope:(id)arg3 error:(id *)arg4;
- (_Bool)deleteThumbnailsForAvatarRecordsWithIdentifiers:(id)arg1 error:(id *)arg2;
- (_Bool)generateThumbnailsForAvatarRecords:(id)arg1 error:(id *)arg2;
- (id)initWithImageStore:(id)arg1 renderer:(id)arg2 environment:(id)arg3;
- (id)initWithImageStore:(id)arg1 coreEnvironment:(id)arg2;
- (_Bool)generateThumbnailsForAvatarRecord:(id)arg1 avatar:(id)arg2 error:(id *)arg3;
- (_Bool)generateThumbnailsForDuplicateAvatarRecord:(id)arg1 originalRecord:(id)arg2 error:(id *)arg3;
- (void)updateThumbnailsForChangesWithTracker:(id)arg1 recordProvider:(CDUnknownBlockType)arg2;

@end
