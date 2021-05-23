/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSFileManager.h>

@interface NSFileManager (SYExtendedAttributes)

- (_Bool)setExtendedAttributeData:(id)arg1 forKey:(id)arg2 atURL:(id)arg3 error:(id *)arg4;
- (id)dataForExtendedAttribute:(id)arg1 atURL:(id)arg2 error:(id *)arg3;
- (_Bool)setExtendedAttributeValue:(id)arg1 forKey:(id)arg2 atURL:(id)arg3 error:(id *)arg4;
- (id)stringForExtendedAttribute:(id)arg1 atURL:(id)arg2 error:(id *)arg3;

@end
