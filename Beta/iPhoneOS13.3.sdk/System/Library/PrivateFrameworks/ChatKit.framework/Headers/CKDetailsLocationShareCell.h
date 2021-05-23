/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKDetailsCell.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface CKDetailsLocationShareCell : CKDetailsCell

{
    _Bool _showOfferTimeRemaining;
    double _offerTimeRemaining;
    UILabel *_timeRemainingLabel;
}

@property (retain, nonatomic) UILabel *timeRemainingLabel;
@property (nonatomic) _Bool showOfferTimeRemaining;
@property (nonatomic) double offerTimeRemaining;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)preferredHeight;
+ (id)reuseIdentifier;
+ (_Bool)shouldHighlight;

- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)timeStringForTimeInterval:(double)arg1;

@end
