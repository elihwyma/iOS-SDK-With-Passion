/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSMutableArray, NSString, TRIPBEnumOptions;

@interface TRIPBEnumDescriptorProto : TRIPBMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) _Bool hasName;
@property (retain, nonatomic) NSMutableArray *valueArray;
@property (nonatomic, readonly) unsigned long long valueArray_Count;
@property (retain, nonatomic) TRIPBEnumOptions *options;
@property (nonatomic) _Bool hasOptions;
@property (retain, nonatomic) NSMutableArray *reservedRangeArray;
@property (nonatomic, readonly) unsigned long long reservedRangeArray_Count;
@property (retain, nonatomic) NSMutableArray *reservedNameArray;
@property (nonatomic, readonly) unsigned long long reservedNameArray_Count;

+ (id)descriptor;

@end
