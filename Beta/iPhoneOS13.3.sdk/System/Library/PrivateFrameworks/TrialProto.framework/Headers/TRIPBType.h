/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSMutableArray, NSString, TRIPBSourceContext;

@interface TRIPBType : TRIPBMessage

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *fieldsArray;
@property (nonatomic, readonly) unsigned long long fieldsArray_Count;
@property (retain, nonatomic) NSMutableArray *oneofsArray;
@property (nonatomic, readonly) unsigned long long oneofsArray_Count;
@property (retain, nonatomic) NSMutableArray *optionsArray;
@property (nonatomic, readonly) unsigned long long optionsArray_Count;
@property (retain, nonatomic) TRIPBSourceContext *sourceContext;
@property (nonatomic) _Bool hasSourceContext;
@property (nonatomic) int syntax;

+ (id)descriptor;

@end
