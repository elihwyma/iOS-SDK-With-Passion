/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, NSSet, NSString, UIAlertController;

@protocol PXActionMenuDelegate;

@interface PXActionMenuController : NSObject <Swift>

{
    _Bool _actionsNeedsUpdate;
    NSArray *_alertActions;
    NSArray *_alertActionViewControllers;
    NSArray *_alertActionTypes;
    NSArray *_activityActions;
    NSSet *_disabledActionTypes;
    NSSet *_excludedActionTypes;
    id <PXActionMenuDelegate> _delegate;
    NSArray *_actionManagers;
}

@property (nonatomic, readonly) NSArray *availableActionTypes;
@property (nonatomic, readonly) NSArray *actionManagers;
@property (copy, nonatomic) NSSet *disabledActionTypes;
@property (copy, nonatomic) NSSet *excludedActionTypes;
@property (weak, nonatomic) id <PXActionMenuDelegate> delegate;
@property (nonatomic, readonly) NSArray *alertActionTypes;
@property (nonatomic, readonly) NSArray *alertActions;
@property (nonatomic, readonly) NSArray *alertActionViewControllers;
@property (nonatomic, readonly) NSArray *activityActions;
@property (nonatomic, readonly) UIAlertController *alertController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)actionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2;
- (_Bool)actionPerformer:(id)arg1 presentViewController:(struct NSObject *)arg2;
- (_Bool)actionPerformer:(id)arg1 dismissViewController:(struct NSObject *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithActionManagers:(id)arg1;
- (_Bool)shouldAllowPerformanceOfActionType:(id)arg1;
- (void)_updateActionsIfNeeded;
- (void)invalidateActions;

@end
