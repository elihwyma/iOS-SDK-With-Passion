/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSMutableArray, NSString;

@protocol OS_dispatch_queue;

@interface PKNotifyRegistration : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s _lock;
    int _token;
    NSMutableArray *_subregistrations;
    _Bool _invalidated;
    NSString *_name;
}

@property (nonatomic, readonly) NSString *name;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)initWithName:(id)arg1;
- (void)removeInvalidatedSubregistration:(id)arg1;
- (id)subregisterWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)hasSubregistrations;

@end
