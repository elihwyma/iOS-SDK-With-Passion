/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <Foundation/NSObject.h>

@interface PFMutualExclusionAssertion : NSObject

{
    _Bool _inCriticalSection;
}

- (void)enterCriticalSection;
- (void)leaveCriticalSection;
- (void)performCriticalSection:(CDUnknownBlockType)arg1;

@end
