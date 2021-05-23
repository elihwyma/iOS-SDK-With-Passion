/*
 Image: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol IMAssistantMessageHandlerDataSource;

@interface IMAssistantMessageHandler : NSObject

{
    id <IMAssistantMessageHandlerDataSource> _messageHandlerDataSource;
    NSArray *_keysToFetch;
    NSString *_intentIdentifier;
}

@property (retain, nonatomic) id <IMAssistantMessageHandlerDataSource> messageHandlerDataSource;
@property (retain, nonatomic) NSArray *keysToFetch;
@property (copy, nonatomic) NSString *intentIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)connectToIMDaemonController;

- (id)contactWithIdentifier:(id)arg1;
- (id)meContactIdentifier;
- (id)initWithDataSource:(id)arg1 intentIdentifier:(id)arg2;
- (id)contactsMatchingINPerson:(id)arg1;
- (id)contactIdentifiersMatchingHandle:(id)arg1;
- (id)contactIdentifiersMatchingHandleID:(id)arg1;
- (id)initWithIntentIdentifier:(id)arg1;
- (id)_initWithDataSource:(id)arg1 contactKeysToFetch:(id)arg2 intentIdentifier:(id)arg3;
- (void)forceTriggerResumeNotification;
- (id)contactsMatchingPredicate:(id)arg1 forPerson:(id)arg2;
- (id)contactIdentifiersMatchingSPIHandle:(id)arg1;
- (id)personFromSPIHandle:(id)arg1 contact:(id)arg2;
- (id)personFromSPIHandle:(id)arg1;
- (id)initWithDataSource:(id)arg1 keysToFetch:(id)arg2 intentIdentifier:(id)arg3;
- (id)unifiedContactIdentifierForContactIdentifier:(id)arg1;
- (id)contactIdentifiersMatchingINPersonHandle:(id)arg1;
- (id)contactIdentifiersForParticipantsInChat:(id)arg1;

@end
