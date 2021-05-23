/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSMutableArray;

@interface TRINamespaceInfos : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *namespaceInfoArray;
@property (nonatomic, readonly) unsigned long long namespaceInfoArray_Count;

+ (id)descriptor;

@end
