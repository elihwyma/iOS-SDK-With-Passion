/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

#import <Foundation/NSObject.h>

@protocol PLActivityCriterionDelegate;

@interface PLActivityCriterion : NSObject

{
    _Bool _satisfied;
    id <PLActivityCriterionDelegate> _delegate;
}

@property (nonatomic) _Bool satisfied;
@property (weak) id <PLActivityCriterionDelegate> delegate;

- (id)init;
- (void)didEnableActivity:(id)arg1;
- (void)didCompleteActivity:(id)arg1;
- (void)didInterruptActivity:(id)arg1;
- (void)didDisableActivity:(id)arg1;

@end
