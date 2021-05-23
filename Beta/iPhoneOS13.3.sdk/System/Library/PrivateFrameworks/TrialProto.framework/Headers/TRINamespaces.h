/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class TRIPBEnumArray;

@interface TRINamespaces : TRIPBMessage

@property (retain, nonatomic) TRIPBEnumArray *namespaceIdArray;
@property (nonatomic, readonly) unsigned long long namespaceIdArray_Count;

+ (id)descriptor;

@end
