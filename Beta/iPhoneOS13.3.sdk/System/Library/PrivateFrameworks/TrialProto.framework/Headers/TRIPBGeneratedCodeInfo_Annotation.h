/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSString, TRIPBInt32Array;

@interface TRIPBGeneratedCodeInfo_Annotation : TRIPBMessage

@property (retain, nonatomic) TRIPBInt32Array *pathArray;
@property (nonatomic, readonly) unsigned long long pathArray_Count;
@property (copy, nonatomic) NSString *sourceFile;
@property (nonatomic) _Bool hasSourceFile;
@property (nonatomic) int begin;
@property (nonatomic) _Bool hasBegin;
@property (nonatomic) int end;
@property (nonatomic) _Bool hasEnd;

+ (id)descriptor;

@end
