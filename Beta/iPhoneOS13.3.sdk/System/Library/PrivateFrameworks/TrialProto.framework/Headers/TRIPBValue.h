/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSString, TRIPBListValue, TRIPBStruct;

@interface TRIPBValue : TRIPBMessage

@property (nonatomic, readonly) int kindOneOfCase;
@property (nonatomic) int nullValue;
@property (nonatomic) double numberValue;
@property (copy, nonatomic) NSString *stringValue;
@property (nonatomic) _Bool boolValue;
@property (retain, nonatomic) TRIPBStruct *structValue;
@property (retain, nonatomic) TRIPBListValue *listValue;

+ (id)descriptor;

@end
