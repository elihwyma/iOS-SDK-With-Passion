/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h>

@class NSURL;

@interface QLThumbnail : NSObject

{
    NSURL *_url;
}

@property (retain) NSURL *url;

+ (id)sharedQueue;
+ (id)defaultDescriptors;

- (id)initWithURL:(id)arg1;
- (id)thumbnailCreationOperationForUseMode:(unsigned long long)arg1 descriptor:(id)arg2 generateIfNeeded:(_Bool)arg3;
- (id)thumbnailCreationOperationForUseMode:(unsigned long long)arg1 descriptor:(id)arg2;
- (id)imageForUseMode:(unsigned long long)arg1 descriptor:(id)arg2 generateIfNeeded:(_Bool)arg3 contentRect:(struct CGRect *)arg4 error:(id *)arg5;
- (_Bool)provideImages:(CDUnknownBlockType)arg1 error:(id *)arg2;

@end
