/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSUOnce : NSObject <Swift>

{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _didPerformOnce;
}

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)performBlockOnce:(CDUnknownBlockType)arg1;

@end
