/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSString, TRIPBFieldOptions;

@interface TRIPBFieldDescriptorProto : TRIPBMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) _Bool hasName;
@property (nonatomic) int number;
@property (nonatomic) _Bool hasNumber;
@property (nonatomic) int label;
@property (nonatomic) _Bool hasLabel;
@property (nonatomic) int type;
@property (nonatomic) _Bool hasType;
@property (copy, nonatomic) NSString *typeName;
@property (nonatomic) _Bool hasTypeName;
@property (copy, nonatomic) NSString *extendee;
@property (nonatomic) _Bool hasExtendee;
@property (copy, nonatomic) NSString *defaultValue;
@property (nonatomic) _Bool hasDefaultValue;
@property (nonatomic) int oneofIndex;
@property (nonatomic) _Bool hasOneofIndex;
@property (copy, nonatomic) NSString *jsonName;
@property (nonatomic) _Bool hasJsonName;
@property (retain, nonatomic) TRIPBFieldOptions *options;
@property (nonatomic) _Bool hasOptions;

+ (id)descriptor;

@end
