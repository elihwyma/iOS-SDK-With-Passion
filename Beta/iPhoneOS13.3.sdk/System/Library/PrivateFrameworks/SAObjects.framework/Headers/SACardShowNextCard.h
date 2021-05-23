/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class SACardSnippet;

@interface SACardShowNextCard : SABaseClientBoundCommand

@property (retain, nonatomic) SACardSnippet *cardSnippet;

+ (id)showNextCard;
+ (id)showNextCardWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
