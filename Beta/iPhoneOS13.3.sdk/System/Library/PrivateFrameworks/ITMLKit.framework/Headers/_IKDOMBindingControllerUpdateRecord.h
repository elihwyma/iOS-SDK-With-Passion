/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _IKDOMBindingControllerUpdateRecord : NSObject

{
    _Bool _cancelled;
    CDUnknownBlockType _preUpdate;
    CDUnknownBlockType _update;
}

@property (copy, nonatomic) CDUnknownBlockType preUpdate;
@property (copy, nonatomic) CDUnknownBlockType update;
@property (nonatomic, getter=isCancelled) _Bool cancelled;

@end
