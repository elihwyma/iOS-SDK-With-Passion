/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString, SASTComparisonEntity, SAUIDecoratedText;

@interface SASTComparisonItem : AceObject <Swift>

@property (retain, nonatomic) SASTComparisonEntity *firstItem;
@property (retain, nonatomic) SAUIDecoratedText *footnote;
@property (retain, nonatomic) SASTComparisonEntity *secondItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)comparisonItem;
+ (id)comparisonItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
