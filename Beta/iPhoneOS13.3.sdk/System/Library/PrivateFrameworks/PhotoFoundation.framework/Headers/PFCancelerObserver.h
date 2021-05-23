/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <Foundation/NSObject.h>

@interface PFCancelerObserver : NSObject

{
    CDUnknownBlockType _block;
}

+ (id)observerForCanceler:(id)arg1 block:(CDUnknownBlockType)arg2;

- (id)init;
- (void)cancelerWasCanceled:(id)arg1;
- (id)initWithCanceler:(id)arg1 block:(CDUnknownBlockType)arg2;

@end
