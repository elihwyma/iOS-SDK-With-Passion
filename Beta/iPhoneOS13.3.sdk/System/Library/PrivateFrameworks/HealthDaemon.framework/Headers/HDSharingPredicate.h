/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSArray, NSNumber;

@interface HDSharingPredicate : NSObject

{
    NSArray *_sharedSampleTypes;
    NSNumber *_maxSampleAge;
}

@property (copy, nonatomic) NSArray *sharedSampleTypes;
@property (copy, nonatomic) NSNumber *maxSampleAge;

@end
