/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate;

@interface _DKSyncChanges : NSObject

{
    NSArray *_additionChangeSets;
    NSArray *_deletionChangeSets;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (nonatomic, readonly) NSArray *additionChangeSets;
@property (nonatomic, readonly) NSArray *deletionChangeSets;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;

- (id)initWithAdditionChangeSets:(id)arg1 deletionChangeSets:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;

@end
