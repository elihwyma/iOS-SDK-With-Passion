/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@interface TRIRadar : TRIPBMessage

@property (nonatomic) unsigned int radarId;
@property (nonatomic) _Bool hasRadarId;

+ (id)descriptor;

@end
