/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSString, TRIPBTimestamp;

@interface TRIRollback : TRIPBMessage

@property (retain, nonatomic) TRIPBTimestamp *rollbackTimestamp;
@property (nonatomic) _Bool hasRollbackTimestamp;
@property (copy, nonatomic) NSString *rolledBackBy;
@property (nonatomic) _Bool hasRolledBackBy;

+ (id)descriptor;

@end
