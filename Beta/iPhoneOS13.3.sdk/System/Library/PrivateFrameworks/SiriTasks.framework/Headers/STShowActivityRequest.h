/*
 Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

#import <AssistantServices/AFSiriRequest.h>

@interface STShowActivityRequest : AFSiriRequest

{
    long long _dataType;
    long long _view;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)dataType;
- (long long)view;
- (id)createResponse;
- (id)_initWithDataType:(long long)arg1 view:(long long)arg2;

@end
