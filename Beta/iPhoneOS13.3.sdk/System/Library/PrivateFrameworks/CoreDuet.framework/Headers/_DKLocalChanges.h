/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate;

@interface _DKLocalChanges : NSObject

{
    NSArray *_insertedObjects;
    NSArray *_tombstones;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (nonatomic, readonly) NSArray *insertedObjects;
@property (nonatomic, readonly) NSArray *tombstones;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;

- (id)initWithInsertedObjects:(id)arg1 tombstones:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;

@end
