/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_semaphore;

@interface CNBinarySemaphoreLock : NSObject

{
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSString *_name;
}

@property (copy) NSString *name;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void)lock;
- (void)unlock;

@end
