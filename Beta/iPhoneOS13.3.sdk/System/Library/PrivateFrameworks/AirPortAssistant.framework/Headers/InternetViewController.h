/*
 Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <AirPortAssistant/AssistantSubUIViewController.h>

#import <AirPortAssistant/Swift-Protocol.h>

@class NSString, UIActivityIndicatorView, UIImageView, UILabel, UIView;

@interface InternetViewController : AssistantSubUIViewController <Swift>

{
    UIView *spinnerWithStatusAdjacentView;
    UILabel *spinnerWithStatusAdjacentLabel;
    UIActivityIndicatorView *spinnerWithStatusAdjacentSpinner;
    UIView *tableHeaderContainerView;
    UIView *diagramContainerView;
    UIView *descriptionContainerView;
    UILabel *descriptionLabel;
    UIImageView *cablingImageLastFrame;
    unsigned long long internetFlow;
    NSString *_swapDescriptionText;
    NSString *_swapSourceLabelText;
}

@property (retain, nonatomic) NSString *swapDescriptionText;
@property (retain, nonatomic) NSString *swapSourceLabelText;
@property (retain, nonatomic) UIView *spinnerWithStatusAdjacentView;
@property (retain, nonatomic) UIView *descriptionContainerView;
@property (retain, nonatomic) UIView *diagramContainerView;
@property (retain, nonatomic) UIImageView *cablingImageLastFrame;
@property (retain, nonatomic) UIView *tableHeaderContainerView;
@property (nonatomic) unsigned long long internetFlow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)presentInternetDisconnectedUI;
- (void)presentInternetWANPluginUI;
- (void)presentSwapCablingCompleteUI;
- (void)presentSwapCablingUI;
- (void)addInternetWANPluginUI;
- (void)addInternetNotWorkingUI;
- (void)addSwapCablingUI;
- (void)determineInfoForDevice:(id)arg1 deviceDiagramInfo:(CDStruct_8a91f745 *)arg2;
- (void)startAnimatingCablingForView:(id)arg1 startingOpacity:(float)arg2 endingOpacity:(float)arg3 duration:(double)arg4;
- (void)addInformationalDiagramWithWANConnectedBaseProductID:(unsigned int)arg1 replacementProductID:(unsigned int)arg2;
- (void)setCommonTraitsForLabel:(id)arg1 forSize:(double)arg2;

@end
