/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAScreenActionActivateUIElement : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *elementId;

+ (id)activateUIElement;
+ (id)activateUIElementWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
