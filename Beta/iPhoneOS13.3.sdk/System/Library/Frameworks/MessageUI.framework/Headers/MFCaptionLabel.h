/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <UIKit/UILabel.h>

@class NSArray;

@protocol MFCaptionLabelDataSource;

@interface MFCaptionLabel : UILabel

{
    _Bool _needsLabelUpdate;
    id <MFCaptionLabelDataSource> _dataSource;
    NSArray *_toRecipients;
    NSArray *_ccRecipients;
    NSArray *_bccRecipients;
    NSArray *_fromSenders;
    NSArray *_otherSigners;
}

@property (weak, nonatomic) id <MFCaptionLabelDataSource> dataSource;
@property (retain, nonatomic) NSArray *toRecipients;
@property (retain, nonatomic) NSArray *ccRecipients;
@property (retain, nonatomic) NSArray *bccRecipients;
@property (retain, nonatomic) NSArray *fromSenders;
@property (retain, nonatomic) NSArray *otherSigners;

+ (id)attributedStringsCache;

- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_setNeedsLabelUpdate;
- (void)updateLabelNow;
- (id)_formattedAttributedString;
- (id)_whitespaceStringWithWidth:(double)arg1;
- (id)_chevronAttributedString;
- (id)_chevronImage;
- (id)_stringAtIndexForCombinedRecipientLists:(unsigned long long)arg1;

@end
