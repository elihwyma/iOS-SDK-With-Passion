/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUITemplateBaseItem.h>

@class NSNumber;

@interface SAUITemplateKeyline : SAUITemplateBaseItem

@property (copy, nonatomic) NSNumber *width;

+ (id)keyline;
+ (id)keylineWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
