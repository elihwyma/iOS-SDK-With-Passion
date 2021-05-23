/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class AFTriggerlessListeningOptions;

@interface AFRequestCompletionOptions : NSObject <Swift>

{
    AFTriggerlessListeningOptions *_triggerlessListeningOptions;
}

@property (copy, nonatomic) AFTriggerlessListeningOptions *triggerlessListeningOptions;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithShowUIDuringListening:(_Bool)arg1 playAlertBeforeListening:(_Bool)arg2;

@end
