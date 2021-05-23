/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NUVideoViewControllerAdConfiguration;

@protocol NUVideoAdProviderFactory, NUVideoProviderFactory;

@interface NUVideoViewControllerQueueFactory : NSObject

{
    NUVideoViewControllerAdConfiguration *_adConfiguration;
    id <NUVideoProviderFactory> _videoProviderFactory;
    id <NUVideoAdProviderFactory> _videoAdProviderFactory;
}

@property (nonatomic, readonly) NUVideoViewControllerAdConfiguration *adConfiguration;
@property (nonatomic, readonly) id <NUVideoProviderFactory> videoProviderFactory;
@property (nonatomic, readonly) id <NUVideoAdProviderFactory> videoAdProviderFactory;

- (id)init;
- (id)createQueueWithVideoItems:(id)arg1;
- (id)initWithAdConfiguration:(id)arg1 videoProviderFactory:(id)arg2 videoAdProviderFactory:(id)arg3;

@end
