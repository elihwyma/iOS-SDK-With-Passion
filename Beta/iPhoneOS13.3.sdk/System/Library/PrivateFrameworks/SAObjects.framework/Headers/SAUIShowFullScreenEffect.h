/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAUIShowFullScreenEffect : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *fullScreenEffectType;

+ (id)showFullScreenEffect;
+ (id)showFullScreenEffectWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
