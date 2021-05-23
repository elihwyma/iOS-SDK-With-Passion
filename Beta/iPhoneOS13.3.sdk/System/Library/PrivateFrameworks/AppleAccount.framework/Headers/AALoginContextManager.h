/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <Foundation/NSObject.h>

@class AAStorableLoginContext;

@interface AALoginContextManager : NSObject

{
    AAStorableLoginContext *_stashedContext;
    struct os_unfair_lock_s _stashedContextLock;
}

@property (retain, nonatomic) AAStorableLoginContext *stashedContext;

+ (id)sharedManager;

- (id)init;
- (void)persistStashedContext;

@end
