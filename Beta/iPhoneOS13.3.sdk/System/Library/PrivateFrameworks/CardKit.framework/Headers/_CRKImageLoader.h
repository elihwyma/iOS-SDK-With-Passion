/*
 Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
 */

#import <Foundation/NSObject.h>

@class INUIImageLoader, NSString;

@protocol _CRKImageLoaderDelegate;

@interface _CRKImageLoader : NSObject

{
    INUIImageLoader *_imageLoader;
    _Bool _active;
    id <_CRKImageLoaderDelegate> _delegate;
}

@property (weak, nonatomic) id <_CRKImageLoaderDelegate> delegate;
@property (nonatomic) _Bool active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)sharedInstanceWithInitialDelegate:(id)arg1;

- (_Bool)loadImage:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_registerWithSearchFoundation;
- (void)_unregisterWithSearchFoundaton;
- (id)resourceIdentifierForLocalImageType:(int)arg1;
- (void)_loadSFImageForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
