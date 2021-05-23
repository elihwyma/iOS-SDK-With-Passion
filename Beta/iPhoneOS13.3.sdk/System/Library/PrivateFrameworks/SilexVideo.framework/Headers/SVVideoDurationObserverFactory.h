/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SVPlayerItemObserverFactory;

@interface SVVideoDurationObserverFactory : NSObject

{
    id <SVPlayerItemObserverFactory> _playerItemObserverFactory;
}

@property (nonatomic, readonly) id <SVPlayerItemObserverFactory> playerItemObserverFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)createDurationObserverForVideo:(id)arg1;
- (id)initWithPlayerItemObserverFactory:(id)arg1;

@end
