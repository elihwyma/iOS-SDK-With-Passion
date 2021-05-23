/*
 Image: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
 */

#import <Foundation/NSObject.h>

@class NSString, PCSLockManager;

__attribute__((visibility("hidden")))
@interface PCSLockAssertion : NSObject

{
    _Bool _held;
    NSString *_name;
    PCSLockManager *_manager;
}

@property (retain) NSString *name;
@property (retain) PCSLockManager *manager;
@property _Bool held;

- (void)dealloc;
- (void)dropAssertion;
- (id)initAssertion:(id)arg1 manager:(id)arg2;
- (_Bool)holdAssertion;

@end
