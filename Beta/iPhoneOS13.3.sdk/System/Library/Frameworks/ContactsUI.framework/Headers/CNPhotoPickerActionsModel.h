/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNPhotoPickerProviderItem, NSArray, NSIndexPath, NSString;

@protocol CNPhotoPickerActionsDelegate;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerActionsModel : NSObject

{
    _Bool _canDelete;
    _Bool _buttonsDisabled;
    id <CNPhotoPickerActionsDelegate> _delegate;
    CNPhotoPickerProviderItem *_providerItem;
    NSArray *_currentInlineActionButtons;
    NSIndexPath *_indexPath;
    NSString *_assignActionTitleOverride;
}

@property (retain, nonatomic) NSArray *currentInlineActionButtons;
@property (retain, nonatomic) CNPhotoPickerProviderItem *providerItem;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (nonatomic) _Bool canDelete;
@property (retain, nonatomic) NSString *assignActionTitleOverride;
@property (nonatomic) _Bool buttonsDisabled;
@property (weak, nonatomic) id <CNPhotoPickerActionsDelegate> delegate;
@property (nonatomic, readonly) NSArray *inlineActionButtons;

+ (id)buttonForActionType:(long long)arg1 withActionBlock:(CDUnknownBlockType)arg2;
+ (id)buttonForActionType:(long long)arg1 titleOverride:(id)arg2 withActionBlock:(CDUnknownBlockType)arg3;
+ (id)localizedTitleForActionType:(long long)arg1;
+ (unsigned long long)maximumNumberOfButtons;
+ (_Bool)actionIsDestructive:(long long)arg1;

- (id)initWithProviderItem:(id)arg1 assignActionTitleOverride:(id)arg2 canDelete:(_Bool)arg3 atIndexPath:(id)arg4;
- (_Bool)canPerformActionType:(long long)arg1;
- (id)generateInlineActionButtons;
- (void)updateProviderItem:(id)arg1;
- (void)didTapAssignToContact;
- (void)didTapEdit;
- (void)didTapDuplicate;
- (void)didTapDelete;

@end
