/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface PXImageExtraction : NSObject

{
    _Bool _cancelled;
}

@property (getter=isCancelled, setter=_setCancelled:) _Bool cancelled;

- (void)cancel;

@end
