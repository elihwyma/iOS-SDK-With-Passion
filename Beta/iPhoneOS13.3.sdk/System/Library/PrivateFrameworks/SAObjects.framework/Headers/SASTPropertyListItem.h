/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSString, SAUIDecoratedText, SAUINanoImageResource;

@interface SASTPropertyListItem : AceObject <Swift>

@property (copy, nonatomic) NSString *alignment;
@property (retain, nonatomic) SAUIDecoratedText *decoratedTitle;
@property (copy, nonatomic) NSArray *decoratedValues;
@property (retain, nonatomic) SAUINanoImageResource *imageResource;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *values;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)propertyListItem;
+ (id)propertyListItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
