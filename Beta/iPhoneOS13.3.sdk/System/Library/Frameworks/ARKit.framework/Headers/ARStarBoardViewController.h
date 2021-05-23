/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <UIKit/UIViewController.h>

@class ARPresentationDescriptor, ARStarBoardPresentationView, CAMetalLayer, NSString, UILabel, UIView;

@interface ARStarBoardViewController : UIViewController

{
    ARStarBoardPresentationView *_presentationView;
    ARPresentationDescriptor *_presentationDescriptor;
    UILabel *_statisticsLabel;
    UIView *_echelonBox;
    NSString *_statisticsString;
}

@property (nonatomic, readonly) CAMetalLayer *presentationLayer;
@property (retain, nonatomic) NSString *statisticsString;

- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)updateEchelonHUDPlacement:(unsigned long long)arg1;
- (void)setupEchelonHUDPlacement:(unsigned long long)arg1;
- (void)setupStatisticsWithView:(id)arg1;
- (void)updateDescriptor:(id)arg1;

@end
