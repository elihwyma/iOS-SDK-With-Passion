/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SVPlayerItemLoaderProviding;

@interface SVVideoLoadingStateObserverFactory : NSObject

{
    id <SVPlayerItemLoaderProviding> _playerItemLoaderProvider;
}

@property (nonatomic, readonly) id <SVPlayerItemLoaderProviding> playerItemLoaderProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)createLoadingStateObserverForVideo:(id)arg1;
- (id)initWithPlayeryItemLoaderProvider:(id)arg1;

@end
