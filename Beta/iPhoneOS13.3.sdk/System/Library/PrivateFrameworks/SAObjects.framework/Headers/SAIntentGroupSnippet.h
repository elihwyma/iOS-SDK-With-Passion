/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSNumber, NSString, SAIntentGroupProtobufMessage;

@protocol SAServerBoundCommand;

@interface SAIntentGroupSnippet : SAUISnippet

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSArray *commands;
@property (retain, nonatomic) SAIntentGroupProtobufMessage *intent;
@property (retain, nonatomic) SAIntentGroupProtobufMessage *intentResponse;
@property (copy, nonatomic) NSString *jsonEncodedIntent;
@property (copy, nonatomic) NSString *jsonEncodedIntentResponse;
@property (retain, nonatomic) id <SAServerBoundCommand> processSynapseFlowCommand;
@property (copy, nonatomic) NSArray *snippetTemplates;
@property (nonatomic) _Bool widgetAllowed;
@property (copy, nonatomic) NSNumber *widgetIndex;

+ (id)snippet;
+ (id)snippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
