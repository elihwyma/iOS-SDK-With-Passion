/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class PETDistributionEventTracker;

@interface SGMContactsInterfaceCacheCount : NSObject

{
    PETDistributionEventTracker *_tracker;
}

@property (nonatomic, readonly) PETDistributionEventTracker *tracker;

- (id)init;
- (void)trackEventWithScalar:(double)arg1;

@end
