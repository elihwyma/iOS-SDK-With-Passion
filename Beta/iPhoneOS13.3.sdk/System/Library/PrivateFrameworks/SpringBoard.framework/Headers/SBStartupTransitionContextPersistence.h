/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class SBBootDefaults;

@interface SBStartupTransitionContextPersistence : NSObject

{
    SBBootDefaults *_bootDefaults;
    _Bool _loginSession;
}

- (id)initWithBootDefaults:(id)arg1 loginSession:(_Bool)arg2;
- (id)readTransitionContext;
- (void)saveContext:(id)arg1;

@end
