/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class SASPronunciationContext;

@interface SAUIListenForPronunciation : SABaseClientBoundCommand

@property (retain, nonatomic) SASPronunciationContext *context;

+ (id)listenForPronunciation;
+ (id)listenForPronunciationWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
