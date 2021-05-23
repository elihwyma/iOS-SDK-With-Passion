/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSDictionary, NSString, SAUITemplateRange;

@interface SAUITemplateAttributedStringAttributeRun : AceObject <Swift>

@property (copy, nonatomic) NSDictionary *attributes;
@property (retain, nonatomic) SAUITemplateRange *range;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)attributedStringAttributeRun;
+ (id)attributedStringAttributeRunWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
