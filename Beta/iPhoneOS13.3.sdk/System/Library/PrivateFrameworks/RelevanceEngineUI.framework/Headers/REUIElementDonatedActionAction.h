/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
 */

#import <RelevanceEngine/REElementAction.h>

@class NSString, REUIDonatedElementProperties, REUISiriActionsPerformer, UIImage;

@protocol REUIElementDonatedActionActionDelegate;

@interface REUIElementDonatedActionAction : REElementAction

{
    REUISiriActionsPerformer *_performer;
    REUIDonatedElementProperties *_properties;
}

@property (retain, nonatomic) REUISiriActionsPerformer *performer;
@property (retain, nonatomic) REUIDonatedElementProperties *properties;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *appName;
@property (nonatomic, readonly) UIImage *appIcon;
@property (weak, nonatomic) id <REUIElementDonatedActionActionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithProperties:(id)arg1;
- (void)_performWithContext:(id)arg1;
- (id)fullsizeAppIcon;
- (id)siriActionsPerformerWantsAlertBackgroundImage:(id)arg1;
- (id)siriActionsPerformerWantsBackgroundViewToBlur:(id)arg1;
- (_Bool)siriActionsPerformer:(id)arg1 wantsToPresentViewController:(id)arg2;
- (void)siriActionsPerformerWantsToSuppressDismissal:(id)arg1;
- (_Bool)siriActionsPerformer:(id)arg1 wantsToDismissViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)siriActionsPerformerDidSucceed:(id)arg1;
- (void)siriActionsPerformer:(id)arg1 didFailWithError:(id)arg2;
- (id)_newPerformer;

@end
