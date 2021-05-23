/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFTriggeredAutomationEvent : WFEvent

{
    _Bool _requiredRuntimeConfirmation;
    NSString *_key;
    NSString *_triggerType;
}

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *triggerType;
@property (nonatomic) _Bool requiredRuntimeConfirmation;

+ (Class)codableEventClass;

@end
