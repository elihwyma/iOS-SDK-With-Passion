/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSMutableArray, NSString;

@interface TRIPBField : TRIPBMessage

@property (nonatomic) int kind;
@property (nonatomic) int cardinality;
@property (nonatomic) int number;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *typeURL;
@property (nonatomic) int oneofIndex;
@property (nonatomic) _Bool packed;
@property (retain, nonatomic) NSMutableArray *optionsArray;
@property (nonatomic, readonly) unsigned long long optionsArray_Count;
@property (copy, nonatomic) NSString *jsonName;
@property (copy, nonatomic) NSString *defaultValue;

+ (id)descriptor;

@end
