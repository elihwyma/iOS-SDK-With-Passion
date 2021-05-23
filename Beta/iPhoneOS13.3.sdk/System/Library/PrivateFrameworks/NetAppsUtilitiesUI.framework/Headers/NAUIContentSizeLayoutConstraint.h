/*
 Image: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI
 */

#import <Foundation/NSLayoutConstraint.h>

@class NAUITextStyleDescriptor, NSString;

@interface NAUIContentSizeLayoutConstraint : NSLayoutConstraint

{
    id _autoitem;
    id _preferredContentSizeDidChangeObserver;
    _Bool _isConstantUpdatingConstraint;
    NAUITextStyleDescriptor *_dynamicTextStyleDescriptor;
    _Bool _allowsAccessibilityTextStyleSizes;
    double _textStyleDefaultBodyLeading;
    _Bool _autoUpdatingConstantShrinks;
    double _defaultConstant;
    double _additionalConstant;
    NSString *_textStyle;
    CDUnknownBlockType _constantLoadingBlock;
}

@property (copy, nonatomic) CDUnknownBlockType constantLoadingBlock;
@property (nonatomic) _Bool autoUpdatingConstantShrinks;
@property (nonatomic) double defaultConstant;
@property (nonatomic) double additionalConstant;
@property (copy, nonatomic) NSString *textStyle;

+ (id)baselineConstraintForAutoitem:(id)arg1 relation:(long long)arg2 toView:(id)arg3 attribute:(long long)arg4 defaultConstant:(double)arg5;
+ (id)_constraintForAutoitem:(id)arg1 constrainedItem:(id)arg2 attribute:(long long)arg3 relatedBy:(long long)arg4 toItem:(id)arg5 attribute:(long long)arg6 multiplier:(double)arg7 defaultConstant:(double)arg8 additionalConstant:(double)arg9 initialize:(_Bool)arg10;
+ (double)_maximumWidthOfStrings:(id)arg1 withFont:(id)arg2;
+ (id)constraintForAutoitem:(id)arg1 additionalConstant:(double)arg2 constantLoadingBlock:(CDUnknownBlockType)arg3;
+ (id)constraintForAutoitem:(id)arg1 constrainedItem:(id)arg2 attribute:(long long)arg3 relatedBy:(long long)arg4 toItem:(id)arg5 attribute:(long long)arg6 multiplier:(double)arg7 defaultConstant:(double)arg8;
+ (id)constraintForAutoitem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 defaultConstant:(double)arg7;
+ (id)constraintForAutoitem:(id)arg1 additionalConstant:(double)arg2 constantWidthSizingStringsLoadingBlock:(CDUnknownBlockType)arg3;
+ (id)baselineConstraintForView:(id)arg1 attribute:(long long)arg2 relation:(long long)arg3 toAutoitem:(id)arg4 defaultConstant:(double)arg5;

- (void)dealloc;
- (void)_updatePreferredContentSize;
- (double)_defaultConstantByFixingUpDefaultConstant:(double)arg1;
- (void)_forceUpdatePreferredContentSize;
- (void)_reloadPreferredContentSize:(_Bool)arg1;

@end
