/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <AssistantServices/AFSiriResponse.h>

@class STTimer;

@interface AFGetTimerResponse : AFSiriResponse

{
    STTimer *_timer;
}

@property (retain, nonatomic) STTimer *timer;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
