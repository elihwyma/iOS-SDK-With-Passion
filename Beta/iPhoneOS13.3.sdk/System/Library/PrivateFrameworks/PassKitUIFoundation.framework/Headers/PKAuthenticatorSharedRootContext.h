/*
 Image: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
 */

#import <Foundation/NSObject.h>

@class LAContext;

@interface PKAuthenticatorSharedRootContext : NSObject

{
    struct os_unfair_lock_s _lock;
    LAContext *_LAContext;
    _Bool _assumeUserIntentAvailable;
}

@property (nonatomic) _Bool assumeUserIntentAvailable;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)externalizedContext;
- (void)resetWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_initialUserIntentAvailabilityAssumption;

@end
