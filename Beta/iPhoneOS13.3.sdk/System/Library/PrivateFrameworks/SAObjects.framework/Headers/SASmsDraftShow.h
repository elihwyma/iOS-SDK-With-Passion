/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSURL;

@interface SASmsDraftShow : SADomainCommand

@property (copy, nonatomic) NSURL *smsIdentifier;

+ (id)draftShow;
+ (id)draftShowWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
