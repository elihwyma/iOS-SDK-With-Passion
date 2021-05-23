/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SearchUISpacingHelper : NSObject

{
    double _compressionResistance;
    struct CGRect _frame;
}

@property (nonatomic) struct CGRect frame;
@property (nonatomic) double compressionResistance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)idealHorizontalSpacingBetweenIcons;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (float)contentCompressionResistancePriorityForAxis:(long long)arg1;
- (float)contentHuggingPriorityForAxis:(long long)arg1;
- (_Bool)isLayoutSizeDependentOnPerpendicularAxis;
- (double)effectiveBaselineOffsetFromContentBottom;
- (double)effectiveFirstBaselineOffsetFromContentTop;

@end
