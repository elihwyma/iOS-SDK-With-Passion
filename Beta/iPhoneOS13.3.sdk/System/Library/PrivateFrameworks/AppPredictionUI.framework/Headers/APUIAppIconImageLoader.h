/*
 Image: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface APUIAppIconImageLoader : NSObject

{
    NSMutableDictionary *_cache;
    NSMutableDictionary *_completionHandlers;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (_Bool)loadImage:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)registerImageLoader;
- (void)_loadImageWithBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_getImageForArtwork:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_blankIconImage;

@end
