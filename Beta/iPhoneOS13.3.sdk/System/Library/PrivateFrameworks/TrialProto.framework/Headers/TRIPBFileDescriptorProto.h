/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSMutableArray, NSString, TRIPBFileOptions, TRIPBInt32Array, TRIPBSourceCodeInfo;

@interface TRIPBFileDescriptorProto : TRIPBMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) _Bool hasName;
@property (copy, nonatomic) NSString *package;
@property (nonatomic) _Bool hasPackage;
@property (retain, nonatomic) NSMutableArray *dependencyArray;
@property (nonatomic, readonly) unsigned long long dependencyArray_Count;
@property (retain, nonatomic) TRIPBInt32Array *publicDependencyArray;
@property (nonatomic, readonly) unsigned long long publicDependencyArray_Count;
@property (retain, nonatomic) TRIPBInt32Array *weakDependencyArray;
@property (nonatomic, readonly) unsigned long long weakDependencyArray_Count;
@property (retain, nonatomic) NSMutableArray *messageTypeArray;
@property (nonatomic, readonly) unsigned long long messageTypeArray_Count;
@property (retain, nonatomic) NSMutableArray *enumTypeArray;
@property (nonatomic, readonly) unsigned long long enumTypeArray_Count;
@property (retain, nonatomic) NSMutableArray *serviceArray;
@property (nonatomic, readonly) unsigned long long serviceArray_Count;
@property (retain, nonatomic) NSMutableArray *extensionArray;
@property (nonatomic, readonly) unsigned long long extensionArray_Count;
@property (retain, nonatomic) TRIPBFileOptions *options;
@property (nonatomic) _Bool hasOptions;
@property (retain, nonatomic) TRIPBSourceCodeInfo *sourceCodeInfo;
@property (nonatomic) _Bool hasSourceCodeInfo;
@property (copy, nonatomic) NSString *syntax;
@property (nonatomic) _Bool hasSyntax;

+ (id)descriptor;

@end
