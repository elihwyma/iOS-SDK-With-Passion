/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@interface ConnectionContextManager : NSObject

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (shared_ptr_9ad247fa)registerSession:(id)arg1;
- (void)unregisterSession:(id)arg1;
- (id)keyForSession:(id)arg1;

@end
