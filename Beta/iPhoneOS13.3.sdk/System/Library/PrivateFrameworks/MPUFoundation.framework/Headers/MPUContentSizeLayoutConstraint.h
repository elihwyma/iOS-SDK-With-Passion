/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <Foundation/NSLayoutConstraint.h>

@class MPUNotificationObserver, NSString, UILabel;

@interface MPUContentSizeLayoutConstraint : NSLayoutConstraint

{
    MPUNotificationObserver *_preferredContentSizeDidChangeObserver;
    double _textStyleDefaultLeading;
    _Bool _isBaselineConstraint;
    _Bool _isLineNumberConstraint;
    unsigned long long _numberOfLines;
    UILabel *_targetLabel;
    double _fontSizeMultiplier;
    double _defaultSizeConstant;
    NSString *_textStyle;
}

@property (nonatomic) double fontSizeMultiplier;
@property (nonatomic) double defaultSizeConstant;
@property (copy, nonatomic) NSString *textStyle;

+ (id)constraintWithAutoupdatingBaselineOfView:(id)arg1 relation:(long long)arg2 toView:(id)arg3 attribute:(long long)arg4 withTextStyle:(id)arg5 nonStandardLeading:(double)arg6;
+ (id)constraintWithAutoupdatingBaselineOfView:(id)arg1 relation:(long long)arg2 toView:(id)arg3 attribute:(long long)arg4 withTextStyle:(id)arg5 multiplier:(double)arg6 nonStandardLeading:(double)arg7;
+ (id)contentSizeAutoupdatingConstraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 textStyle:(id)arg7 defaultSizeConstant:(double)arg8;
+ (id)constraintWithAutoupdatingBaselineOfView:(id)arg1 toView:(id)arg2 attribute:(long long)arg3 withTextStyle:(id)arg4 nonStandardLeading:(double)arg5;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 autoupdatingConstantFromLabel:(id)arg7 textStyle:(id)arg8 numberOfLines:(unsigned long long)arg9;

- (void)_updatePreferredContentSize;

@end
