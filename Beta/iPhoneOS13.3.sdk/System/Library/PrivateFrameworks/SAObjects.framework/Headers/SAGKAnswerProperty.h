/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSNumber, NSString, SAUIAppPunchOut, SAUIDecoratedText;

@protocol SAClientBoundCommand;

@interface SAGKAnswerProperty : AceObject <Swift>

@property (retain, nonatomic) id <SAClientBoundCommand> command;
@property (retain, nonatomic) SAUIDecoratedText *decoratedValue;
@property (retain, nonatomic) SAUIDecoratedText *decoratedValueAnnotation;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) SAUIAppPunchOut *punchOut;
@property (copy, nonatomic) NSNumber *selected;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *valueAnnotation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)answerProperty;
+ (id)answerPropertyWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
