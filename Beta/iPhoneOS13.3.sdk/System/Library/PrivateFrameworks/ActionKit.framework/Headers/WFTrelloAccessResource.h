/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/WFAccountAccessResource.h>

@interface WFTrelloAccessResource : WFAccountAccessResource

- (Class)accountClass;
- (id)associatedAppIdentifier;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)authorizationURLWithCallbackURL:(id)arg1;

@end
