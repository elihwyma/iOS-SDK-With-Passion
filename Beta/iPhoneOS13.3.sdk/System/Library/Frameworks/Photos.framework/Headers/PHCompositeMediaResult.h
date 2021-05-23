/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface PHCompositeMediaResult : NSObject

{
    NSMutableDictionary *_mutableInfo;
    NSDictionary *_imageProperties;
}

- (id)error;
- (_Bool)isCancelled;
- (void)setError:(id)arg1;
- (void)setSandboxExtensionToken:(id)arg1;
- (id)sandboxExtensionToken;
- (_Bool)isPlaceholder;
- (id)imageProperties;
- (id)info;
- (void)setCancelled:(_Bool)arg1;
- (struct CGImage *)imageRef;
- (id)exifOrientation;
- (id)imageURL;
- (id)imageData;
- (id)initWithRequestID:(int)arg1;
- (id)mediaMetadata;
- (id)adjustmentData;
- (id)videoURL;
- (_Bool)containsValidData;
- (id)imageUTI;
- (long long)uiOrientation;
- (unsigned int)cgOrientation;
- (id)videoAdjustmentData;
- (_Bool)canHandleAdjustmentData;
- (id)baseVersionNeeded;
- (id)imagePropertiesLoadIfNeeded:(_Bool)arg1;
- (void)setInfo:(id)arg1 forKey:(id)arg2;
- (void)addInfoFromDictionary:(id)arg1;
- (void)clearError;
- (void)setErrorIfNone:(id)arg1;
- (void)setIsInCloud:(_Bool)arg1;
- (_Bool)isInCloud;
- (void)setDegraded:(_Bool)arg1;
- (_Bool)isDegraded;
- (void)setIsPlaceholder:(_Bool)arg1;
- (id)imageSandboxExtensionToken;
- (id)videoSandboxExtensionToken;

@end
