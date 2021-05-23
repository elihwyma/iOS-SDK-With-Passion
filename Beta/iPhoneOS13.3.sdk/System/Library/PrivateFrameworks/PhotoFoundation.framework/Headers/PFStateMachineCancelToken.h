/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <Foundation/NSObject.h>

@interface PFStateMachineCancelToken : NSObject

{
    _Bool _isCancelled;
}

- (void)cancel;
- (_Bool)isCancelled;

@end
