/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SVURLAssetFactory, SVURLAssetOptionsProviding, SVVideoURLProviderFactory;

@interface SVURLAssetLoaderFactory : NSObject

{
    id <SVURLAssetFactory> _URLAssetFactory;
    id <SVVideoURLProviderFactory> _URLProviderFactory;
    id <SVURLAssetOptionsProviding> _optionsProvider;
}

@property (nonatomic, readonly) id <SVURLAssetFactory> URLAssetFactory;
@property (nonatomic, readonly) id <SVVideoURLProviderFactory> URLProviderFactory;
@property (nonatomic, readonly) id <SVURLAssetOptionsProviding> optionsProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)createURLAssetLoaderForVideo:(id)arg1;
- (id)initWithURLAssetFactory:(id)arg1 URLProviderFactory:(id)arg2 optionsProvider:(id)arg3;

@end
