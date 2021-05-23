/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SVPlayerItemObserverFactory, SVVideoTimeProviderFactory;

@interface SVVideoTimeJumpObserverFactory : NSObject

{
    id <SVPlayerItemObserverFactory> _playerItemObserverFactory;
    id <SVVideoTimeProviderFactory> _timeProviderFactory;
}

@property (nonatomic, readonly) id <SVPlayerItemObserverFactory> playerItemObserverFactory;
@property (nonatomic, readonly) id <SVVideoTimeProviderFactory> timeProviderFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)createTimeJumpObserverForVideo:(id)arg1;
- (id)initWithPlayerItemObserverFactory:(id)arg1 timeProviderFactory:(id)arg2;

@end
