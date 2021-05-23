/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIRedeemResultsViewController.h>

@class NSOperationQueue, NSString, SKUIGiftItemView, SKUIItemStateCenter, SKUIRedeemITunesPassLockup, SKUIRedeemResultMessageView, SKUITextBoxView, SKUITextLayout, UIButton, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface SKUIRedeemNativeResultsViewController : SKUIRedeemResultsViewController

{
    _Bool _extendedMessageIsExpanded;
    NSOperationQueue *_operationQueue;
    UIButton *_anotherButton;
    SKUITextLayout *_extendedMessageTextLayout;
    SKUITextBoxView *_extendedMessageView;
    UIImageView *_headerImageView;
    UIImage *_itemImage;
    SKUIItemStateCenter *_itemStateCenter;
    SKUIGiftItemView *_itemView;
    SKUIRedeemResultMessageView *_messageView;
    SKUIRedeemITunesPassLockup *_passbookLockup;
    unsigned long long _currentItemStateFlag;
}

@property (retain, nonatomic) UIButton *anotherButton;
@property (retain, nonatomic) SKUITextLayout *extendedMessageTextLayout;
@property (retain, nonatomic) SKUITextBoxView *extendedMessageView;
@property (retain, nonatomic) UIImageView *headerImageView;
@property (retain, nonatomic) UIImage *itemImage;
@property (retain, nonatomic) SKUIItemStateCenter *itemStateCenter;
@property (retain, nonatomic) SKUIGiftItemView *itemView;
@property (retain, nonatomic) SKUIRedeemResultMessageView *messageView;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) SKUIRedeemITunesPassLockup *passbookLockup;
@property (nonatomic) unsigned long long currentItemStateFlag;
@property (nonatomic) _Bool extendedMessageIsExpanded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)canShowResultsForRedeem:(id)arg1;

- (void)dealloc;
- (id)_item;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (id)_itemView;
- (id)_emptySection;
- (double)_tableWidth;
- (void)_reloadSections;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (void)_setHeaderImage:(id)arg1;
- (id)initWithRedeem:(id)arg1;
- (void)_passbookLockupAction:(id)arg1;
- (void)redeemResultsView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_setItemImage:(id)arg1;
- (void)_reloadResultViewMessage;
- (void)_redeemAnotherAction:(id)arg1;
- (void)_extendedMessageAction:(id)arg1;
- (void)_openAction:(id)arg1;
- (id)_resultImageViewSection;
- (id)_itemViewSection;
- (id)_messageViewSection;
- (id)_anotherButtonSection;
- (id)_passbookLearnMoreSection;
- (id)_headerImageViewSection;
- (id)_extendedMessageViewSection;
- (id)_linksSection;

@end
