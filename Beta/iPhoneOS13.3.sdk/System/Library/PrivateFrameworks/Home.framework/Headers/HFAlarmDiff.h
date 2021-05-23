/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface HFAlarmDiff : NSObject

{
    NSSet *_updatedAlarms;
    NSSet *_addedAlarms;
    NSSet *_deletedAlarms;
    NSSet *_unmodifiedAlarms;
}

@property (copy, nonatomic) NSSet *updatedAlarms;
@property (copy, nonatomic) NSSet *addedAlarms;
@property (copy, nonatomic) NSSet *deletedAlarms;
@property (copy, nonatomic) NSSet *unmodifiedAlarms;
@property (nonatomic, readonly) _Bool inputWasEqual;

+ (id)generateAlarmDiffFromSet:(id)arg1 toSet:(id)arg2;

- (id)description;

@end
