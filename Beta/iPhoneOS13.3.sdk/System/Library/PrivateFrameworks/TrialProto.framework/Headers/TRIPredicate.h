/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSMutableArray;

@interface TRIPredicate : TRIPBMessage

@property (nonatomic) int systemVariable;
@property (nonatomic) _Bool hasSystemVariable;
@property (nonatomic) int operation;
@property (nonatomic) _Bool hasOperation;
@property (retain, nonatomic) NSMutableArray *operandArray;
@property (nonatomic, readonly) unsigned long long operandArray_Count;

+ (id)descriptor;

@end
