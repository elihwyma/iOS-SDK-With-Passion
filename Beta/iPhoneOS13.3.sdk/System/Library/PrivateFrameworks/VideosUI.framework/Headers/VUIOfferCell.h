/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIFocusableCollectionViewCell.h>

@class IKViewElement, NSString, VUIOfferView;

__attribute__((visibility("hidden")))
@interface VUIOfferCell : VUIFocusableCollectionViewCell

{
    IKViewElement *_viewElement;
    VUIOfferView *_offerView;
}

@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) VUIOfferView *offerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)configureViewWithElement:(id)arg1 existingCell:(id)arg2;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)rentalExpirationLabelNeedsRelayout:(id)arg1;

@end
