/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class TRIPBUInt32Array, TRIPBUInt32ObjectDictionary;

@interface TRINamespaceInfo : TRIPBMessage

@property (nonatomic) int namespaceId;
@property (nonatomic) _Bool hasNamespaceId;
@property (nonatomic) int projectOwner;
@property (nonatomic) _Bool hasProjectOwner;
@property (retain, nonatomic) TRIPBUInt32Array *compatibilityVersionArray;
@property (nonatomic, readonly) unsigned long long compatibilityVersionArray_Count;
@property (retain, nonatomic) TRIPBUInt32ObjectDictionary *defaultFactorLevels;
@property (nonatomic, readonly) unsigned long long defaultFactorLevels_Count;

+ (id)descriptor;

@end
