/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString, SVKeyValueObserver, SVVideoViewController;

@interface SVVideoViewControllerSizeObserver : NSObject

{
    CDUnknownBlockType changeBlock;
    SVVideoViewController *_videoViewController;
    SVKeyValueObserver *_boundsObserver;
    struct CGSize _size;
}

@property (weak, nonatomic, readonly) SVVideoViewController *videoViewController;
@property (nonatomic, readonly) SVKeyValueObserver *boundsObserver;
@property (nonatomic) struct CGSize size;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, setter=onChange:) CDUnknownBlockType changeBlock;

- (id)initWithVideoViewController:(id)arg1;

@end
