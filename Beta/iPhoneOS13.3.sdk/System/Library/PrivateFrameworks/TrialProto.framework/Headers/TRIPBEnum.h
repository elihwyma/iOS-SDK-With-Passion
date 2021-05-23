/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSMutableArray, NSString, TRIPBSourceContext;

@interface TRIPBEnum : TRIPBMessage

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *enumvalueArray;
@property (nonatomic, readonly) unsigned long long enumvalueArray_Count;
@property (retain, nonatomic) NSMutableArray *optionsArray;
@property (nonatomic, readonly) unsigned long long optionsArray_Count;
@property (retain, nonatomic) TRIPBSourceContext *sourceContext;
@property (nonatomic) _Bool hasSourceContext;
@property (nonatomic) int syntax;

+ (id)descriptor;

@end
