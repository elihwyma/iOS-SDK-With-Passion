/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSMutableArray, NSString, TRIPBServiceOptions;

@interface TRIPBServiceDescriptorProto : TRIPBMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) _Bool hasName;
@property (retain, nonatomic) NSMutableArray *methodArray;
@property (nonatomic, readonly) unsigned long long methodArray_Count;
@property (retain, nonatomic) TRIPBServiceOptions *options;
@property (nonatomic) _Bool hasOptions;

+ (id)descriptor;

@end
