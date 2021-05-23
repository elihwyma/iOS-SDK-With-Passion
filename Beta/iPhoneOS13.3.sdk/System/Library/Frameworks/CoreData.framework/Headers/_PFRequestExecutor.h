/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface _PFRequestExecutor : NSObject

{
    NSObject<OS_dispatch_group> *_requestGroup;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_group> *requestGroup;

- (id)init;
- (void)dealloc;
- (_Bool)wait;
- (void)requestFinished;
- (_Bool)executeRequest:(id)arg1 inContext:(id)arg2 error:(id *)arg3;

@end
