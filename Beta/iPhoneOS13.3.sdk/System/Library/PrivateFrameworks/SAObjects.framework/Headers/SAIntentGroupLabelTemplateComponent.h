/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAIntentGroupLabelTemplateComponent : SADomainObject

@property (copy, nonatomic) NSString *labelTemplateComponentStyle;
@property (copy, nonatomic) NSString *text;

+ (id)labelTemplateComponent;
+ (id)labelTemplateComponentWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
