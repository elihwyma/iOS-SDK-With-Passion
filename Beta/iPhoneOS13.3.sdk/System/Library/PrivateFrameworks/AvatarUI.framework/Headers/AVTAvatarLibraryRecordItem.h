/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTUIEnvironment, NSString;

@protocol AVTAvatarRecord;

@interface AVTAvatarLibraryRecordItem : NSObject

{
    id <AVTAvatarRecord> _avatarRecord;
    AVTUIEnvironment *_environment;
}

@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (nonatomic, readonly) id <AVTAvatarRecord> avatarRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)cellIdentifier;

- (void)configureCell:(id)arg1 imageProvider:(id)arg2;
- (id)initWithAvatarRecord:(id)arg1 environment:(id)arg2;

@end
