/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SASettingSnippet.h>

@class NSNumber;

@interface SASettingBoolSnippet : SASettingSnippet

@property (nonatomic) _Bool toggle;
@property (copy, nonatomic) NSNumber *value;

+ (id)boolSnippet;
+ (id)boolSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
