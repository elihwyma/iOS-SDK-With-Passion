/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSNumber, NSString, SASVSystemDialogActOutput;

@interface SACFClientFlowRequestCallback : AceObject <Swift>

@property (copy, nonatomic) NSArray *applicationContextObjects;
@property (copy, nonatomic) NSArray *conversationStateAttachments;
@property (copy, nonatomic) NSArray *dictationPromptAbortValues;
@property (copy, nonatomic) NSString *dictationPromptTargetDomain;
@property (copy, nonatomic) NSArray *dictationPromptTargetNodes;
@property (copy, nonatomic) NSArray *disambiguationPromptAbortValues;
@property (copy, nonatomic) NSNumber *disambiguationPromptAmbiguityId;
@property (copy, nonatomic) NSArray *disambiguationPromptResponseTargets;
@property (copy, nonatomic) NSString *disambiguationPromptTargetDomain;
@property (copy, nonatomic) NSArray *displayHintsAsJson;
@property (copy, nonatomic) NSString *nlInput;
@property (retain, nonatomic) SASVSystemDialogActOutput *systemDialogActOutput;
@property (copy, nonatomic) NSArray *weightedPromptAbortValues;
@property (copy, nonatomic) NSArray *weightedPromptResponseTargets;
@property (copy, nonatomic) NSNumber *weightedPromptStrict;
@property (copy, nonatomic) NSString *weightedPromptTargetDomain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)clientFlowRequestCallback;
+ (id)clientFlowRequestCallbackWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
