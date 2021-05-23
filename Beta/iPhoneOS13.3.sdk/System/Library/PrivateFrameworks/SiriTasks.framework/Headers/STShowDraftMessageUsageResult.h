/*
 Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

#import <AssistantServices/AFSiriTaskUsageResult.h>

@interface STShowDraftMessageUsageResult : AFSiriTaskUsageResult

{
    long long _resultCode;
}

@property (nonatomic) long long resultCode;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_resultDescription;

@end
