/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTAvatarRecord, AVTAvatarRecordDataSource, AVTUIEnvironment, AVTViewSessionProvider, NSArray, NSString;

@protocol AVTAvatarActionsModelDelegate;

@interface AVTAvatarActionsModel : NSObject

{
    _Bool _allowCreate;
    _Bool _isCreatingAvatar;
    _Bool _buttonsDisabled;
    id <AVTAvatarActionsModelDelegate> _delegate;
    AVTAvatarRecord *_avatarRecord;
    AVTAvatarRecordDataSource *_dataSource;
    AVTUIEnvironment *_environment;
    AVTViewSessionProvider *_avtViewSessionProvider;
    NSArray *_currentInlineActionButtons;
}

@property (retain, nonatomic) AVTAvatarRecord *avatarRecord;
@property (nonatomic, readonly) AVTAvatarRecordDataSource *dataSource;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (nonatomic, readonly) AVTViewSessionProvider *avtViewSessionProvider;
@property (retain, nonatomic) NSArray *currentInlineActionButtons;
@property (nonatomic) _Bool isCreatingAvatar;
@property (nonatomic) _Bool buttonsDisabled;
@property (weak, nonatomic) id <AVTAvatarActionsModelDelegate> delegate;
@property (nonatomic, readonly) NSArray *inlineActionButtons;
@property (nonatomic, readonly) _Bool allowCreate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)buttonForActionType:(long long)arg1 withActionBlock:(CDUnknownBlockType)arg2;
+ (id)localizedTitleForActionType:(long long)arg1;
+ (unsigned long long)maximumNumberOfButtons;
+ (_Bool)actionIsDestructive:(long long)arg1;

- (_Bool)canPerformActionType:(long long)arg1;
- (id)generateInlineActionButtons;
- (void)didTapEdit;
- (void)didTapDuplicate;
- (void)didTapDelete;
- (void)avatarEditorViewController:(id)arg1 didFinishWithAvatarRecord:(id)arg2;
- (void)avatarEditorViewControllerDidCancel:(id)arg1;
- (void)presentEditor:(id)arg1 forCreating:(_Bool)arg2;
- (void)didTapCreateNew;
- (id)initWithAvatarRecord:(id)arg1 dataSource:(id)arg2 avtViewSessionProvider:(id)arg3 environment:(id)arg4 allowCreate:(_Bool)arg5;
- (void)updateForChangedContentCategorySize;

@end
