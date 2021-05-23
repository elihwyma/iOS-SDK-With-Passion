/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString, SADecoratedString;

@interface SASTBodyTextItem : AceObject <Swift>

@property (copy, nonatomic) NSString *alignment;
@property (copy, nonatomic) NSString *bodyText;
@property (retain, nonatomic) SADecoratedString *decoratedBodyText;
@property (copy, nonatomic) NSString *position;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)bodyTextItem;
+ (id)bodyTextItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
