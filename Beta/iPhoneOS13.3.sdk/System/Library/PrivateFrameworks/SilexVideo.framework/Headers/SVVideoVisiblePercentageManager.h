/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString, SVWeakObjectCache;

@protocol SVVideoVisiblePercentageProviderFactory;

@interface SVVideoVisiblePercentageManager : NSObject

{
    id <SVVideoVisiblePercentageProviderFactory> _visiblePercentageProviderFactory;
    SVWeakObjectCache *_visiblePercentageProviders;
}

@property (nonatomic, readonly) id <SVVideoVisiblePercentageProviderFactory> visiblePercentageProviderFactory;
@property (nonatomic, readonly) SVWeakObjectCache *visiblePercentageProviders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_visiblePercentageProviderForVideo:(id)arg1;
- (id)visiblePercentageProviderForVideo:(id)arg1;
- (id)visiblePercentageReporterForVideo:(id)arg1;
- (id)initWithVisiblePercentageProviderFactory:(id)arg1;

@end
