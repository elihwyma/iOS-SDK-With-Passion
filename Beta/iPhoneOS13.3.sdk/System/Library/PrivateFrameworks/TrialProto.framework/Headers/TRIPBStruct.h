/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSMutableDictionary;

@interface TRIPBStruct : TRIPBMessage

@property (retain, nonatomic) NSMutableDictionary *fields;
@property (nonatomic, readonly) unsigned long long fields_Count;

+ (id)descriptor;

@end
