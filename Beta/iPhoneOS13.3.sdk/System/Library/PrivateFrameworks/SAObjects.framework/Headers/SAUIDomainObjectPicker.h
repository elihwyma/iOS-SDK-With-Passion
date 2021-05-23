/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@class NSString;

@interface SAUIDomainObjectPicker : SAUISnippet

@property (copy, nonatomic) NSString *idNodeName;

+ (id)domainObjectPicker;
+ (id)domainObjectPickerWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
