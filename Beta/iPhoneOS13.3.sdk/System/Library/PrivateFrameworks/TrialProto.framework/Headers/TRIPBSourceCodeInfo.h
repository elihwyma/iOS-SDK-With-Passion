/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSMutableArray;

@interface TRIPBSourceCodeInfo : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *locationArray;
@property (nonatomic, readonly) unsigned long long locationArray_Count;

+ (id)descriptor;

@end
