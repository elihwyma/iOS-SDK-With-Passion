/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SASettingNumericSnippet.h>

@class NSNumber;

@interface SASettingFloatSnippet : SASettingNumericSnippet

@property (copy, nonatomic) NSNumber *value;

+ (id)floatSnippet;
+ (id)floatSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
