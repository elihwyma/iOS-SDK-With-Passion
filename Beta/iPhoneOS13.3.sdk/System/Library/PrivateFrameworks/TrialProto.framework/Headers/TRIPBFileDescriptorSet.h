/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSMutableArray;

@interface TRIPBFileDescriptorSet : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *fileArray;
@property (nonatomic, readonly) unsigned long long fileArray_Count;

+ (id)descriptor;

@end
