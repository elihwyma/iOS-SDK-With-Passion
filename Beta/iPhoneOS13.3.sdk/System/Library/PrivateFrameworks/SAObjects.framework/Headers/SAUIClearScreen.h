/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAAceView;

@interface SAUIClearScreen : SABaseClientBoundCommand

@property (retain, nonatomic) SAAceView *initialView;

+ (id)clearScreen;
+ (id)clearScreenWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
