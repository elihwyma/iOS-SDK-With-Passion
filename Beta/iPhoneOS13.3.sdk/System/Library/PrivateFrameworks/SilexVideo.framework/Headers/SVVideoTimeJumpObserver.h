/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SVPlayerItemObserving, SVVideoTimeProviding;

@interface SVVideoTimeJumpObserver : NSObject

{
    CDUnknownBlockType jumpBlock;
    id <SVPlayerItemObserving> _itemObserver;
    id <SVVideoTimeProviding> _timeProvider;
}

@property (nonatomic, readonly) id <SVPlayerItemObserving> itemObserver;
@property (nonatomic, readonly) id <SVVideoTimeProviding> timeProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, setter=onJump:) CDUnknownBlockType jumpBlock;

- (id)initWithItemObserver:(id)arg1 timeProvider:(id)arg2;
- (void)jumped:(id)arg1;

@end
