/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class NSString, PXCMMCloudView, PXGadgetSpec;

@protocol PXCMMCloudGadgetViewControllerDelegate;

@interface PXCMMCloudGadgetViewController : UIViewController

{
    _Bool _isCPLOn;
    _Bool _hasContentToDisplay;
    long long _priority;
    id <PXCMMCloudGadgetViewControllerDelegate> _delegate;
    PXGadgetSpec *_gadgetSpec;
    NSString *_gadgetTitle;
    PXCMMCloudView *_cloudView;
}

@property (retain, nonatomic) PXCMMCloudView *cloudView;
@property (weak, nonatomic) id <PXCMMCloudGadgetViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *gadgetTitle;
@property (nonatomic) _Bool disableDismissAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long gadgetType;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property (nonatomic, readonly) _Bool hasContentToDisplay;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) unsigned long long accessoryButtonType;
@property (nonatomic, readonly) NSString *accessoryButtonTitle;
@property (nonatomic, readonly) unsigned long long headerStyle;
@property (nonatomic) long long priority;
@property (nonatomic, readonly) _Bool supportsHighlighting;
@property (nonatomic, readonly) _Bool supportsSelection;
@property (nonatomic, readonly) _Bool supportsAssetsDrop;
@property (nonatomic, readonly) Class collectionViewItemClass;
@property (nonatomic) struct CGRect visibleContentRect;

+ (id)_userDefaults;
+ (void)setDidDismissCloudGadget:(_Bool)arg1;
+ (_Bool)didDismissCloudGadget;

- (void)_accountStoreDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)viewDidLoad;
- (struct NSObject *)contentViewController;
- (id)initWithSourceType:(unsigned long long)arg1;
- (void)completeMyMomentCloudPhotoViewLearnMoreTapped:(id)arg1;
- (void)completeMyMomentCloudPhotoViewDismissTapped:(id)arg1;
- (void)_updateCPLStatus;
- (void)_updateViewInsets;

@end
