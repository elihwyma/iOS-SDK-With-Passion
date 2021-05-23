/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSURL;

@interface SAUIOpenLink : SABaseClientBoundCommand

@property (copy, nonatomic) NSURL *ref;

+ (id)openLink;
+ (id)openLinkWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
