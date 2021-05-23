/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@protocol PXActionPerformerDelegate;

@interface PXActionManager : NSObject

{
    id <PXActionPerformerDelegate> _performerDelegate;
}

@property (weak, nonatomic) id <PXActionPerformerDelegate> performerDelegate;

+ (CDUnknownBlockType)_unlockDeviceHandler;
+ (void)setEnsureUnlockedDeviceHandler:(CDUnknownBlockType)arg1;

- (_Bool)canPerformActionType:(id)arg1;
- (id)actionPerformerForActionType:(id)arg1;
- (id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2;
- (id)systemImageNameForActionType:(id)arg1;
- (id)barButtonItemForActionType:(id)arg1;
- (id)alertActionForActionType:(id)arg1;
- (id)activityForActionType:(id)arg1;
- (id)previewActionForActionType:(id)arg1 image:(id)arg2;
- (id)alertActionViewControllerForActionType:(id)arg1;

@end
