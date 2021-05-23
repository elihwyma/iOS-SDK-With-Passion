/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <AssistantServices/AFSiriRequest.h>

@class STTimer;

@interface AFSetTimerRequest : AFSiriRequest

{
    STTimer *_timer;
}

@property (retain, nonatomic) STTimer *timer;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)createResponse;

@end
