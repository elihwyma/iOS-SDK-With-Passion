/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString, SAUIDecoratedText;

@interface SASTSubheaderItem : AceObject <Swift>

@property (retain, nonatomic) SAUIDecoratedText *leftText;
@property (retain, nonatomic) SAUIDecoratedText *rightText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)subheaderItem;
+ (id)subheaderItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
