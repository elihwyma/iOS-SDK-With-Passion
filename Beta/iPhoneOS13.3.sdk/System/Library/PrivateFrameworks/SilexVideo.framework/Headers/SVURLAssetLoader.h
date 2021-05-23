/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@protocol SVURLAssetFactory, SVVideoURLProviding;

@interface SVURLAssetLoader : NSObject

{
    id <SVURLAssetFactory> _URLAssetFactory;
    id <SVVideoURLProviding> _URLProvider;
    NSDictionary *_options;
}

@property (nonatomic, readonly) id <SVURLAssetFactory> URLAssetFactory;
@property (nonatomic, readonly) id <SVVideoURLProviding> URLProvider;
@property (copy, nonatomic, readonly) NSDictionary *options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (CDUnknownBlockType)URLAssetWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithURLAssetFactory:(id)arg1 URLProvider:(id)arg2 options:(id)arg3;

@end
