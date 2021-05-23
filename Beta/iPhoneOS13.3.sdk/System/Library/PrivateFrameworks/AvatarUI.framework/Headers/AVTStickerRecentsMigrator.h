/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTUILogger;

@protocol AVTAvatarStoreInternal;

@interface AVTStickerRecentsMigrator : NSObject

{
    _Bool _migrationHasBeenPerformed;
    id <AVTAvatarStoreInternal> _store;
    AVTUILogger *_logger;
}

@property (retain, nonatomic) id <AVTAvatarStoreInternal> store;
@property (nonatomic) AVTUILogger *logger;
@property (nonatomic) _Bool migrationHasBeenPerformed;

- (id)initWithStore:(id)arg1 environment:(id)arg2;
- (void)performMigrationIfNeeded;
- (void)setNeedsMigrationOnNextLaunch;

@end
