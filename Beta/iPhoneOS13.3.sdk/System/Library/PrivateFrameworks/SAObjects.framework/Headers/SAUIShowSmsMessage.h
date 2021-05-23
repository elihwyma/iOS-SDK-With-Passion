/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@class SASmsSms;

@interface SAUIShowSmsMessage : SAUISnippet

@property (nonatomic) _Bool showAsDraft;
@property (retain, nonatomic) SASmsSms *sms;

+ (id)showSmsMessage;
+ (id)showSmsMessageWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
