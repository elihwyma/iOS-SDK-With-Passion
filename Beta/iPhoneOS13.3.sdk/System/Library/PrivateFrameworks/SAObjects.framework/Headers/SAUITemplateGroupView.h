/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUITemplateBaseItemGroup.h>

@class NSString;

@interface SAUITemplateGroupView : SAUITemplateBaseItemGroup

@property (copy, nonatomic) NSString *alignment;
@property (copy, nonatomic) NSString *layoutStyle;

+ (id)groupView;
+ (id)groupViewWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
