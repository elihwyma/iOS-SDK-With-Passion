/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class TRIRadar;

@interface TRIApproval : TRIPBMessage

@property (nonatomic) int approvalType;
@property (nonatomic) _Bool hasApprovalType;
@property (retain, nonatomic) TRIRadar *radar;
@property (nonatomic) _Bool hasRadar;

+ (id)descriptor;

@end
