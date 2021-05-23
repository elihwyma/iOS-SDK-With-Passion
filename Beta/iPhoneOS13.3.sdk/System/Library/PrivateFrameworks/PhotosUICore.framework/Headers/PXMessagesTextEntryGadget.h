/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class NSString, PXGadgetSpec, UITextField, UIView;

@protocol PXGadgetDelegate;

@interface PXMessagesTextEntryGadget : UIViewController

{
    UIView *_containerView;
    UITextField *_textEntryField;
    long long _priority;
    id <PXGadgetDelegate> _delegate;
    PXGadgetSpec *_gadgetSpec;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long gadgetType;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property (weak, nonatomic) id <PXGadgetDelegate> delegate;
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

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (struct NSObject *)contentViewController;
- (_Bool)hasLoadedContentData;
- (void)userDidSelectAccessoryButton:(struct NSObject *)arg1;
- (void)_updateViewControllerInsets;
- (void)_simulateMessage:(id)arg1;

@end
