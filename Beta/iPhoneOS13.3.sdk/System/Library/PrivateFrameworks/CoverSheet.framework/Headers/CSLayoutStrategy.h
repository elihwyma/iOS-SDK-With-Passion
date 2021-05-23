/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <Foundation/NSObject.h>

@protocol CSPersistentContentLayoutProviding><CSDateTimeLayoutAggregating;

@interface CSLayoutStrategy : NSObject

{
    id <CSPersistentContentLayoutProviding><CSDateTimeLayoutAggregating> _persistentLayout;
}

@property (weak, nonatomic) id <CSPersistentContentLayoutProviding><CSDateTimeLayoutAggregating> persistentLayout;

- (unsigned long long)_listLayoutForPage:(id)arg1;
- (double)_customListWidthForPage:(id)arg1 startingBounds:(struct CGRect)arg2;
- (double)_listInsetXForPage:(id)arg1;
- (unsigned long long)_listWidthStrategyForPage:(id)arg1;
- (struct CGRect)suggestedFrameForDateTimeViewInScreenCoordinates:(struct CGRect)arg1 forceCenteredX:(_Bool)arg2;
- (struct CGRect)suggestedFrameForListForPage:(id)arg1 bounds:(struct CGRect)arg2;
- (struct UIEdgeInsets)suggestedContentInsetsForListForPage:(id)arg1;

@end
