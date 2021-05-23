/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SVPlayerItemObserverFactory, SVVideoDurationObserverFactory;

@interface SVVideoLoadingProgressObserverFactory : NSObject

{
    id <SVPlayerItemObserverFactory> _playerItemObserverFactory;
    id <SVVideoDurationObserverFactory> _durationObserverFactory;
}

@property (nonatomic, readonly) id <SVPlayerItemObserverFactory> playerItemObserverFactory;
@property (nonatomic, readonly) id <SVVideoDurationObserverFactory> durationObserverFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)createLoadingProgressObserverForVideo:(id)arg1;
- (id)initWithPlayerItemObserverFactory:(id)arg1 durationObserverFactory:(id)arg2;

@end
