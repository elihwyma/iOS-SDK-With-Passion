/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString, SAUIDecoratedText;

@interface SASTStockComparisonItem : AceObject <Swift>

@property (copy, nonatomic) NSString *stockValueFacet;
@property (retain, nonatomic) SAUIDecoratedText *subtitle;
@property (retain, nonatomic) SAUIDecoratedText *title;
@property (retain, nonatomic) SAUIDecoratedText *value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)stockComparisonItem;
+ (id)stockComparisonItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
