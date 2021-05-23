/*
 Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
 */

#import <TLKLabel.h>

@class NSAttributedString, NSString;

__attribute__((visibility("hidden")))
@interface FULabel : TLKLabel

{
    NSString *_stringValue;
    NSAttributedString *_attributedStringValue;
    FULabel *_realAssociatedScalingLabel;
    _Bool _uppercase;
    _Bool _useCurrentLocale;
    CDUnknownBlockType _onTap;
    FULabel *_associatedScalingLabel;
}

@property (copy) CDUnknownBlockType onTap;
@property (nonatomic, readonly) _Bool uppercase;
@property (readonly) _Bool useCurrentLocale;
@property (weak, nonatomic) FULabel *associatedScalingLabel;

- (void)setText:(id)arg1;
- (void)layoutSubviews;
- (void)setAttributedText:(id)arg1;
- (void)awakeFromNib;
- (id)_associatedScalingLabel;
- (void)setAssociatedLabel:(id)arg1;
- (void)performTap:(id)arg1;
- (void)setUppercase:(_Bool)arg1 usingCurrentLocale:(_Bool)arg2;
- (void)setStyleProvider:(id)arg1 primaryStyle:(_Bool)arg2;

@end
