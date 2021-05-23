/*
 Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

#import <AssistantServices/AFSiriRequest.h>

@class STMediaChannel;

@interface STShowChannelRequest : AFSiriRequest

{
    STMediaChannel *_channel;
}

@property (nonatomic, readonly) STMediaChannel *channel;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithChannel:(id)arg1;

@end
