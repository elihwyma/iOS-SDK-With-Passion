/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSString, NSURL;

@interface SANoteUpdate : SADomainCommand

@property (copy, nonatomic) NSString *contentsToAppend;
@property (copy, nonatomic) NSURL *identifier;

+ (id)update;
+ (id)updateWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
