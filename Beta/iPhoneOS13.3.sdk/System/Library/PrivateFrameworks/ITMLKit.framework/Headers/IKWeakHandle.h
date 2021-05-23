/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKHandle.h>

@interface IKWeakHandle : IKHandle

{
    id _object;
    CDUnknownBlockType _getter;
}

- (id)object;
- (id)initWithGetter:(CDUnknownBlockType)arg1;

@end
