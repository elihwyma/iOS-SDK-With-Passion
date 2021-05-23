/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <CFNetwork/__NSCFURLLocalStreamTaskWork.h>

@interface __NSCFURLLocalStreamTaskWorkBlockOp : __NSCFURLLocalStreamTaskWork

{
    CDUnknownBlockType _block;
    _Bool _shouldWaitForTls;
}

+ (id)opWithBlock:(CDUnknownBlockType)arg1 description:(const char *)arg2;

- (void)dealloc;
- (void)executeBlock;
- (_Bool)shouldWaitForTLS;
- (void)markBlockAsWaitingOnTls:(_Bool)arg1;

@end
