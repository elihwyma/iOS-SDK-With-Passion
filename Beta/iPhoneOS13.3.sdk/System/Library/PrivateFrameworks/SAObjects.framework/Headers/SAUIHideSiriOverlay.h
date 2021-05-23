/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SAUIHideSiriOverlay : SABaseClientBoundCommand

@property (nonatomic) _Bool hideSnippets;

+ (id)hideSiriOverlay;
+ (id)hideSiriOverlayWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
