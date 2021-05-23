/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFSetupSuggestedAutomationEvent : WFEvent

{
    _Bool _completed;
    unsigned int _currentStep;
    NSString *_key;
    NSString *_suggestedAutomationIdentifier;
}

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *suggestedAutomationIdentifier;
@property (nonatomic) unsigned int currentStep;
@property (nonatomic) _Bool completed;

+ (Class)codableEventClass;

@end
