/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSURL;

@interface SANoteDelete : SADomainCommand

@property (copy, nonatomic) NSURL *identifier;

+ (id)delete;
+ (id)deleteWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
