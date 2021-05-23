/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSNumber, NSString;

@interface SAUITemplateTabularDataRowStyleRule : AceObject <Swift>

@property (copy, nonatomic) NSNumber *minimumHeight;
@property (copy, nonatomic) NSNumber *rowCount;
@property (copy, nonatomic) NSNumber *rowStartIndex;
@property (copy, nonatomic) NSNumber *showTopBorder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)tabularDataRowStyleRule;
+ (id)tabularDataRowStyleRuleWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
