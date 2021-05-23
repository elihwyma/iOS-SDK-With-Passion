/*
 Image: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
 */

#import <UIKit/UIView.h>

@class UIImageView;

@interface PKPaymentRemoteInstrumentThumbnailView : UIView

{
    struct UIImageView *_placeholderImageView;
    struct UIImageView *_cardImageView;
}

@property (retain, nonatomic) UIImageView *placeholderImageView;
@property (retain, nonatomic) UIImageView *cardImageView;

- (void)_prepareConstraints;
- (id)initWithRemotePaymentInstrument:(id)arg1;
- (void)_updateCardImage:(struct CGImage *)arg1;

@end
