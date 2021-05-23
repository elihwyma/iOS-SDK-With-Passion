/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSMutableArray;

@interface TRIUIAssignmentLanguage : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *predicateArray;
@property (nonatomic, readonly) unsigned long long predicateArray_Count;
@property (retain, nonatomic) NSMutableArray *assignmentArray;
@property (nonatomic, readonly) unsigned long long assignmentArray_Count;

+ (id)descriptor;

@end
