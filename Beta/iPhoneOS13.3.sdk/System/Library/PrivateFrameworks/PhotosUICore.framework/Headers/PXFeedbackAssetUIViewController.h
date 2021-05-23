/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSDictionary, NSString, PHAsset, PXAutoloopVideoProcessTask, PXFeedbackLikeItOrNotComboUIViewController, UINavigationController;

@protocol PXFeedbackAssetUIViewControllerDelegate;

@interface PXFeedbackAssetUIViewController : UIViewController

{
    _Bool _userLikedIt;
    PHAsset *_asset;
    id <PXFeedbackAssetUIViewControllerDelegate> _delegate;
    NSDictionary *_positiveFeedback;
    NSDictionary *_negativeFeedback;
    UINavigationController *_navigationController;
    PXFeedbackLikeItOrNotComboUIViewController *_feedbackController;
    PXAutoloopVideoProcessTask *_autoLoopFrameworkDiagnosticsCurrentTask;
    NSArray *_autoLoopFrameworkDiagnosticFileURLs;
}

@property (retain, nonatomic) PHAsset *asset;
@property (nonatomic) _Bool userLikedIt;
@property (retain, nonatomic) NSDictionary *positiveFeedback;
@property (retain, nonatomic) NSDictionary *negativeFeedback;
@property (retain, nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic) PXFeedbackLikeItOrNotComboUIViewController *feedbackController;
@property (retain, nonatomic) PXAutoloopVideoProcessTask *autoLoopFrameworkDiagnosticsCurrentTask;
@property (retain, nonatomic) NSArray *autoLoopFrameworkDiagnosticFileURLs;
@property (weak, nonatomic, readonly) id <PXFeedbackAssetUIViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (void)userDidFinish:(_Bool)arg1;
- (id)longTitleText;
- (id)viewTitleForRadar;
- (id)negativeFeedbackKeys;
- (id)positiveFeedbackKeys;
- (_Bool)shouldDisplaySecondaryFeedbackButtons;
- (void)userIndicatedLike;
- (void)userIndicatedDislike;
- (void)userSentPositiveFeedback:(id)arg1 negativeFeedback:(id)arg2 customFeedback:(id)arg3;
- (void)autoloopVideoTaskStatusDidChange:(id)arg1;
- (id)initWithAsset:(id)arg1 delegate:(id)arg2;
- (void)_fileRadarWithAutoLoopAsset:(id)arg1 positiveFeedback:(id)arg2 negativeFeedback:(id)arg3;
- (void)continueFiling;
- (void)_startAutoLoopVideoTaskForDiagnosticsWithAsset:(id)arg1;

@end
