/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString, SVWeakObjectCache;

@protocol SVVideoAdProviderFactory, SVVideoProviderFactory;

@interface SVVideoProviderManager : NSObject

{
    id <SVVideoProviderFactory> _videoProviderFactory;
    id <SVVideoAdProviderFactory> _videoAdProviderFactory;
    SVWeakObjectCache *_videoProviders;
    SVWeakObjectCache *_videoAdProviders;
}

@property (nonatomic, readonly) id <SVVideoProviderFactory> videoProviderFactory;
@property (nonatomic, readonly) id <SVVideoAdProviderFactory> videoAdProviderFactory;
@property (nonatomic, readonly) SVWeakObjectCache *videoProviders;
@property (nonatomic, readonly) SVWeakObjectCache *videoAdProviders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)videoEventTrackerForVideo:(id)arg1;
- (id)videoAdProviderForVideo:(id)arg1;
- (id)videoProviderForVideo:(id)arg1;
- (id)skipThresholdForVideo:(id)arg1;
- (id)createURLProviderForVideo:(id)arg1;
- (id)initWithVideoProviderFactory:(id)arg1 videoAdProviderFactory:(id)arg2;

@end
