/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

@class MRPlatterViewController, NSArray, NSString;

@interface CSMediaControlsViewController : CSCoverSheetViewControllerBase

{
    MRPlatterViewController *_platterViewController;
    struct CGSize _containerSize;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *requiredVisualStyleCategories;

+ (Class)viewClass;

- (id)init;
- (void)setContainerSize:(struct CGSize)arg1;
- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)handleEvent:(id)arg1;
- (long long)presentationType;
- (id)visualStylingProviderForCategory:(long long)arg1;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
- (long long)presentationPriority;
- (void)_layoutMediaControls;
- (struct CGRect)_suggestedFrameForMediaControls;
- (void)_updatePersistentUpdatesEnabled:(_Bool)arg1;
- (void)platterViewController:(id)arg1 didReceiveInteractionEvent:(id)arg2;

@end
