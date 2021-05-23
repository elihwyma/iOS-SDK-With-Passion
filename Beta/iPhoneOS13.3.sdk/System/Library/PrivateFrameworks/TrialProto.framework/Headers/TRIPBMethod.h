/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSMutableArray, NSString;

@interface TRIPBMethod : TRIPBMessage

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *requestTypeURL;
@property (nonatomic) _Bool requestStreaming;
@property (copy, nonatomic) NSString *responseTypeURL;
@property (nonatomic) _Bool responseStreaming;
@property (retain, nonatomic) NSMutableArray *optionsArray;
@property (nonatomic, readonly) unsigned long long optionsArray_Count;
@property (nonatomic) int syntax;

+ (id)descriptor;

@end
