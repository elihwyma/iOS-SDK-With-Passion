/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@interface _NSURLBDOnce : NSObject

{
    CDUnknownBlockType fBlock;
    _Bool fDone;
}

- (void)dealloc;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (void)doit;

@end
