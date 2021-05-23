/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNMultiValuePropertyDescription.h>

@class NSArray;

@interface CNCompoundMultiValuePropertyDescription : CNMultiValuePropertyDescription

@property (nonatomic, readonly) CDUnknownBlockType dictionaryTransform;
@property (nonatomic, readonly) CDUnknownBlockType fromDictionaryTransform;
@property (nonatomic, readonly) NSArray *summarizationKeys;

- (CDUnknownBlockType)fromPlistTransform;
- (id)stringForIndexingForContact:(id)arg1;
- (CDUnknownBlockType)plistTransform;

@end
