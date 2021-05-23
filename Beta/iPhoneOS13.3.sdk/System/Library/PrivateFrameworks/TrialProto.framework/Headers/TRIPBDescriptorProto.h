/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSMutableArray, NSString, TRIPBMessageOptions;

@interface TRIPBDescriptorProto : TRIPBMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) _Bool hasName;
@property (retain, nonatomic) NSMutableArray *fieldArray;
@property (nonatomic, readonly) unsigned long long fieldArray_Count;
@property (retain, nonatomic) NSMutableArray *extensionArray;
@property (nonatomic, readonly) unsigned long long extensionArray_Count;
@property (retain, nonatomic) NSMutableArray *nestedTypeArray;
@property (nonatomic, readonly) unsigned long long nestedTypeArray_Count;
@property (retain, nonatomic) NSMutableArray *enumTypeArray;
@property (nonatomic, readonly) unsigned long long enumTypeArray_Count;
@property (retain, nonatomic) NSMutableArray *extensionRangeArray;
@property (nonatomic, readonly) unsigned long long extensionRangeArray_Count;
@property (retain, nonatomic) NSMutableArray *oneofDeclArray;
@property (nonatomic, readonly) unsigned long long oneofDeclArray_Count;
@property (retain, nonatomic) TRIPBMessageOptions *options;
@property (nonatomic) _Bool hasOptions;
@property (retain, nonatomic) NSMutableArray *reservedRangeArray;
@property (nonatomic, readonly) unsigned long long reservedRangeArray_Count;
@property (retain, nonatomic) NSMutableArray *reservedNameArray;
@property (nonatomic, readonly) unsigned long long reservedNameArray_Count;

+ (id)descriptor;

@end
