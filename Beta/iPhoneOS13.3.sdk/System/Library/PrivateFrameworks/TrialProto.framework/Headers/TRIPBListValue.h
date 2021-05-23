/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSMutableArray;

@interface TRIPBListValue : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *valuesArray;
@property (nonatomic, readonly) unsigned long long valuesArray_Count;

+ (id)descriptor;

@end
