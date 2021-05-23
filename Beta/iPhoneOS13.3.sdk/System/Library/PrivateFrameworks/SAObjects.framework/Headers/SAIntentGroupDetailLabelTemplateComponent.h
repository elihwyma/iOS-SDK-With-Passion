/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAIntentGroupLabelTemplateComponent.h>

@class NSString;

@interface SAIntentGroupDetailLabelTemplateComponent : SAIntentGroupLabelTemplateComponent

@property (copy, nonatomic) NSString *detailText;

+ (id)detailLabelTemplateComponent;
+ (id)detailLabelTemplateComponentWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
