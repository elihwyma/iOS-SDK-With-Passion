/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSMutableArray, NSString;

@interface TRIPBEnumValue : TRIPBMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) int number;
@property (retain, nonatomic) NSMutableArray *optionsArray;
@property (nonatomic, readonly) unsigned long long optionsArray_Count;

+ (id)descriptor;

@end
