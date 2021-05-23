/*
 Image: /System/Library/PrivateFrameworks/PowerlogHelperdOperators.framework/PowerlogHelperdOperators
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableSet, NSString;

@interface PLBackgroundTransferEvent : NSObject

{
    NSDate *_startDate;
    NSString *_bundleID;
    NSMutableSet *_taskUUIDs;
}

@property (retain) NSDate *startDate;
@property (retain) NSString *bundleID;
@property (retain) NSMutableSet *taskUUIDs;

- (id)description;

@end
