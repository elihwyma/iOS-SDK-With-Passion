/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSMapTable, NSString, UIDropInteraction, UIPresentationController, UIView;

@protocol _UISheetDropInteractionDelegate;

@interface _UISheetDropInteraction : NSObject <Swift>

{
    UIView *_view;
    id <_UISheetDropInteractionDelegate> _delegate;
    UIDropInteraction *_dropInteraction;
    NSMapTable *_activityTypesOrActivities;
    UIPresentationController *_presentationController;
}

@property (nonatomic, readonly) UIDropInteraction *dropInteraction;
@property (nonatomic, readonly) NSMapTable *activityTypesOrActivities;
@property (retain, nonatomic) UIPresentationController *presentationController;
@property (weak, nonatomic, readonly) id <_UISheetDropInteractionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, readonly) UIView *view;

- (id)initWithDelegate:(id)arg1;
- (void)willMoveToView:(id)arg1;
- (void)didMoveToView:(id)arg1;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (id)_activityTypeForSession:(id)arg1;
- (void)_activityForSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_removeActivityTypeOrActivityForSession:(id)arg1;

@end
