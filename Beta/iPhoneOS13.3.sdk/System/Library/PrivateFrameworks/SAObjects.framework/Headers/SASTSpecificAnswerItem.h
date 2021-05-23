/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString, SAUIDecoratedText;

@interface SASTSpecificAnswerItem : AceObject <Swift>

@property (retain, nonatomic) SAUIDecoratedText *decoratedFooter;
@property (retain, nonatomic) SAUIDecoratedText *decoratedValue;
@property (copy, nonatomic) NSString *footer;
@property (copy, nonatomic) NSString *value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)specificAnswerItem;
+ (id)specificAnswerItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
