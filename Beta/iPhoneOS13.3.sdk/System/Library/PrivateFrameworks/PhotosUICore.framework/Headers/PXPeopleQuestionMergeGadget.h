/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class NSString, PHPerson, PXGadgetSpec, PXPeopleScalableAvatarView, UIButton, UILabel;

@protocol PXGadgetDelegate;

@interface PXPeopleQuestionMergeGadget : UIViewController

{
    id <PXGadgetDelegate> _delegate;
    PXGadgetSpec *_gadgetSpec;
    unsigned long long _gadgetType;
    PHPerson *_person;
    PXPeopleScalableAvatarView *_keyFaceView;
    UILabel *_titleLabel;
    UIButton *_reviewButton;
}

@property (retain, nonatomic) PHPerson *person;
@property (retain, nonatomic) PXPeopleScalableAvatarView *keyFaceView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *reviewButton;
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
- (struct NSObject *)contentViewController;
- (id)initWithPerson:(id)arg1;
- (void)reviewButtonTapped:(id)arg1;

@end
