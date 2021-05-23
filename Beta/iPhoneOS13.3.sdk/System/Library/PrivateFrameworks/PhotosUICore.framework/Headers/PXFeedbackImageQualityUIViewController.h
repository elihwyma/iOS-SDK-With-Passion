/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSDictionary, NSString, PXFeedbackLikeItOrNotComboUIViewController, UINavigationController;

@protocol PXFeedbackImageQualityUIViewControllerDelegate;

@interface PXFeedbackImageQualityUIViewController : UIViewController

{
    NSArray *_assets;
    id <PXFeedbackImageQualityUIViewControllerDelegate> _delegate;
    NSDictionary *_negativeFeedback;
    UINavigationController *_navigationController;
    PXFeedbackLikeItOrNotComboUIViewController *_feedbackController;
    NSArray *_imageQualityDiagnosticFileURLs;
}

@property (retain, nonatomic) NSArray *assets;
@property (retain, nonatomic) NSDictionary *negativeFeedback;
@property (retain, nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic) PXFeedbackLikeItOrNotComboUIViewController *feedbackController;
@property (retain, nonatomic) NSArray *imageQualityDiagnosticFileURLs;
@property (weak, nonatomic, readonly) id <PXFeedbackImageQualityUIViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (_Bool)wantsCustomFeedbackSection;
- (_Bool)wantsPositiveFeedbackSection;
- (_Bool)shouldContinuePresentingFormAfterFeedback;
- (void)userDidFinish:(_Bool)arg1;
- (id)longTitleText;
- (id)viewTitleForRadar;
- (id)negativeFeedbackKeys;
- (id)positiveFeedbackKeys;
- (_Bool)shouldDisplaySecondaryFeedbackButtons;
- (void)userIndicatedLike;
- (void)userIndicatedDislike;
- (void)userSentPositiveFeedback:(id)arg1 negativeFeedback:(id)arg2 customFeedback:(id)arg3;
- (id)initWithAssets:(id)arg1 delegate:(id)arg2;
- (void)_fileRadarWithAssets:(id)arg1 positiveFeedback:(id)arg2 negativeFeedback:(id)arg3 customFeedback:(id)arg4;
- (void)_generateResourceFilesForAssets:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_generateTitleForFeedback:(id)arg1;
- (long long)_radarComponentForFeedback:(id)arg1;
- (id)_componentIDForComponent:(long long)arg1;
- (id)_componentNameForComponent:(long long)arg1;
- (id)_keywordIDForComponent:(long long)arg1;
- (id)_generateURLsForAssetsDBGFiles:(id)arg1;

@end
