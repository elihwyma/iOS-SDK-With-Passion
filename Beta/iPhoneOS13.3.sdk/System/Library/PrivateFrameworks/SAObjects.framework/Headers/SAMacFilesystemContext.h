/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSArray;

@interface SAMacFilesystemContext : SADomainObject

@property (copy, nonatomic) NSArray *targetEntities;

+ (id)filesystemContext;
+ (id)filesystemContextWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
