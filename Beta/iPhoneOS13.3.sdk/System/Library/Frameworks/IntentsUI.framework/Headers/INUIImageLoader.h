/*
 Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol INUIImageLoaderDelegate;

@interface INUIImageLoader : NSObject

{
    id <INUIImageLoaderDelegate> _delegate;
}

@property (weak, nonatomic) id <INUIImageLoaderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *serviceIdentifier;
@property (nonatomic, readonly) unsigned long long servicePriority;

+ (id)registeredImageLoaderWithScreenDelegate;

- (void)dealloc;
- (_Bool)loadImage:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)canLoadImageDataForImage:(id)arg1;
- (void)loadDataImageFromImage:(id)arg1 usingPortableImageLoader:(id)arg2 scaledSize:(CDStruct_c3b9c2ee)arg3 completion:(CDUnknownBlockType)arg4;
- (void)registerWithIntents;
- (void)registerWithSearchFoundation;
- (void)deregisterWithSearchFoundation;
- (void)deregisterWithIntents;

@end
