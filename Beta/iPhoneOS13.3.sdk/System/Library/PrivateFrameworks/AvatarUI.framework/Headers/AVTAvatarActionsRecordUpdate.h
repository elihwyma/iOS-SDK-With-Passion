/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@protocol AVTAvatarRecord;

@interface AVTAvatarActionsRecordUpdate : NSObject

{
    _Bool _fromLeft;
    id <AVTAvatarRecord> _avatarRecord;
}

@property (nonatomic, readonly) id <AVTAvatarRecord> avatarRecord;
@property (nonatomic, readonly) _Bool fromLeft;

+ (id)recordUpdateForDeletingRecord:(id)arg1 withDataSource:(id)arg2;

- (id)initWithAvatarRecord:(id)arg1 fromLeft:(_Bool)arg2;

@end
