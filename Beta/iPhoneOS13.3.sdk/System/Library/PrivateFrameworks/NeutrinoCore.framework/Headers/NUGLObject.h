/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NUGLObjectPool;

@interface NUGLObject : NSObject

{
    unsigned int _identifier;
    NUGLObjectPool *_objectPool;
}

@property (nonatomic, readonly) _Bool exists;
@property (nonatomic) unsigned int identifier;
@property (retain, nonatomic) NUGLObjectPool *objectPool;

- (void)dealloc;
- (id)description;
- (void)delete;
- (void)generate:(id)arg1;
- (void)ensure:(id)arg1;
- (void)resetGLObject;

@end
