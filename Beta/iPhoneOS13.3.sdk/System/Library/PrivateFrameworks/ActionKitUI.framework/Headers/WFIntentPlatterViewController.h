/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <UIKit/UIViewController.h>

@class APUILongLookViewController, CRKCardPresentation, CRKCardPresentationConfiguration, INInteraction, NSString, PLClickPresentationInteractionManager, UIView;

@protocol CRKCardViewControllerDelegate, CRKCardViewControlling, WFIntentViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WFIntentPlatterViewController : UIViewController

{
    _Bool _requiresConfirmation;
    PLClickPresentationInteractionManager *_clickPresentationInteractionManager;
    id <WFIntentViewControllerDelegate> _delegate;
    INInteraction *_interaction;
    APUILongLookViewController *_longLookViewController;
    CRKCardPresentationConfiguration *_configuration;
    CRKCardPresentation *_cardPresentation;
    UIView *_sourceView;
}

@property (nonatomic, readonly) APUILongLookViewController *longLookViewController;
@property (nonatomic, readonly) CRKCardPresentationConfiguration *configuration;
@property (nonatomic, readonly) CRKCardPresentation *cardPresentation;
@property (weak, nonatomic) UIView *sourceView;
@property (nonatomic, readonly) UIViewController<CRKCardViewControlling> *cardViewController;
@property (nonatomic, readonly) INInteraction *interaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) PLClickPresentationInteractionManager *clickPresentationInteractionManager;
@property (nonatomic, readonly) UIView *viewForPreview;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (nonatomic, readonly) struct CGRect initialPresentedFrameOfViewForPreview;
@property (nonatomic, readonly) struct CGRect finalPresentedFrameOfViewForPreview;
@property (nonatomic, readonly) struct CGRect finalDismissedFrameOfViewForPreview;
@property (nonatomic, readonly) id <CRKCardViewControllerDelegate> cardViewControllerDelegate;
@property (weak, nonatomic) id <WFIntentViewControllerDelegate> delegate;
@property (nonatomic, readonly) _Bool requiresConfirmation;

+ (void)initialize;

- (void)dismissPlatterWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)presentPlatterFromSourceView:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateWithInteraction:(id)arg1;
- (void)clickPresentationInteractionManager:(id)arg1 willDismissPresentedContentWithTrigger:(long long)arg2;
- (id)presentedViewControllerForClickPresentationInteractionManager:(id)arg1;
- (void)cardViewControllerDidLoad:(id)arg1;
- (void)cardViewControllerBoundsDidChange:(id)arg1;
- (void)longLookPlatterDidReceiveTap:(id)arg1;
- (id)interfaceActionsForLongLook:(id)arg1;
- (id)appIconImageForLongLook:(id)arg1;
- (id)bundleIdentifierForAppIconInLongLook:(id)arg1;
- (id)titleForLongLookHeaderInLongLook:(id)arg1;
- (_Bool)fetchViewControllerForContentViewInLongLook:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (double)preferredContentHeightForLongLook:(id)arg1;
- (id)initWithInteraction:(id)arg1 requiresConfirmation:(_Bool)arg2;
- (void)confirmButtonTapped;
- (void)updateProgressIndicator:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updatePlatterSize;

@end
