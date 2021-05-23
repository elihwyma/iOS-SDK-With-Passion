/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFSuggestAutomationEvent : WFEvent

{
    _Bool _interacted;
    _Bool _completed;
    NSString *_key;
    NSString *_suggestedAutomationIdentifier;
}

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *suggestedAutomationIdentifier;
@property (nonatomic) _Bool interacted;
@property (nonatomic) _Bool completed;

+ (Class)codableEventClass;

@end
