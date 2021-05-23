/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <Foundation/NSObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface ISDefaults : NSObject

{
    struct os_unfair_lock_s _lock;
    NSNumber *__usePerstentCache;
}

@property (retain) NSNumber *_usePerstentCache;
@property (readonly) struct os_unfair_lock_s lock;
@property (readonly) _Bool usePerstentCache;

+ (id)sharedInstance;

@end
