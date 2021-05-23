/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBAWDMetricData.h>

@class NSArray, NSString, NSUUID;

@interface SBPressSequenceMetricData : SBAWDMetricData

{
    _Bool _didTriggerSOS;
    NSString *_pressName;
    NSArray *_pressSequence;
    unsigned long long _clickMax;
    NSUUID *_sosTriggerUUID;
}

@property (copy, nonatomic) NSString *pressName;
@property (copy, nonatomic) NSArray *pressSequence;
@property (nonatomic) _Bool didTriggerSOS;
@property (nonatomic) unsigned long long clickMax;
@property (copy, nonatomic) NSUUID *sosTriggerUUID;

@end
