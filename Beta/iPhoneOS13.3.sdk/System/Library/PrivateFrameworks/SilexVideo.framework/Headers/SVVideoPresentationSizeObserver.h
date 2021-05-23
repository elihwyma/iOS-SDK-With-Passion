/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString, SVKeyValueObserver;

@protocol SVPlayerItemObserving;

@interface SVVideoPresentationSizeObserver : NSObject

{
    CDUnknownBlockType changeBlock;
    id <SVPlayerItemObserving> _playerItemObserver;
    SVKeyValueObserver *_presentationSizeObserver;
    struct CGSize _presentationSize;
}

@property (nonatomic, readonly) id <SVPlayerItemObserving> playerItemObserver;
@property (nonatomic, readonly) SVKeyValueObserver *presentationSizeObserver;
@property (nonatomic) struct CGSize presentationSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, setter=onChange:) CDUnknownBlockType changeBlock;

- (id)initWithPlayerItemObserver:(id)arg1;

@end
