/*
 Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

#import <AssistantServices/STSiriModelObject.h>

@class NSString, NSURL;

@interface STMediaChannel : STSiriModelObject

{
    NSString *_callSign;
    NSString *_channelIdentifier;
    NSString *_name;
    NSURL *_streamUrl;
}

@property (copy, nonatomic) NSString *callSign;
@property (copy, nonatomic) NSString *channelIdentifier;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSURL *streamUrl;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
