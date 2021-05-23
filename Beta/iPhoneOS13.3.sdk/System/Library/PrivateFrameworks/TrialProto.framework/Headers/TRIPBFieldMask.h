/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSMutableArray;

@interface TRIPBFieldMask : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *pathsArray;
@property (nonatomic, readonly) unsigned long long pathsArray_Count;

+ (id)descriptor;

@end
