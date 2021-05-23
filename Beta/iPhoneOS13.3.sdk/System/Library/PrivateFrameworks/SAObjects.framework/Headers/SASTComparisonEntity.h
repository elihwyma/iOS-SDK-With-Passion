/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString, SAUIDecoratedText, SAUINanoImageResource;

@interface SASTComparisonEntity : AceObject <Swift>

@property (retain, nonatomic) SAUIDecoratedText *decoratedTitle;
@property (retain, nonatomic) SAUIDecoratedText *decoratedValue;
@property (retain, nonatomic) SAUINanoImageResource *imageResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)comparisonEntity;
+ (id)comparisonEntityWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
