/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSMutableArray, NSString, TRIPBSourceContext;

@interface TRIPBApi : TRIPBMessage

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *methodsArray;
@property (nonatomic, readonly) unsigned long long methodsArray_Count;
@property (retain, nonatomic) NSMutableArray *optionsArray;
@property (nonatomic, readonly) unsigned long long optionsArray_Count;
@property (copy, nonatomic) NSString *version;
@property (retain, nonatomic) TRIPBSourceContext *sourceContext;
@property (nonatomic) _Bool hasSourceContext;
@property (retain, nonatomic) NSMutableArray *mixinsArray;
@property (nonatomic, readonly) unsigned long long mixinsArray_Count;
@property (nonatomic) int syntax;

+ (id)descriptor;

@end
