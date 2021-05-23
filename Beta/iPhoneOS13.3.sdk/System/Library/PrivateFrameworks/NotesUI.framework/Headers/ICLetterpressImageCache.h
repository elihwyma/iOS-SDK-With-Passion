/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class CPBitmapStore, NSMutableDictionary;

@interface ICLetterpressImageCache : NSObject

{
    NSMutableDictionary *_imageCache;
    CPBitmapStore *_serializedCache;
}

@property (retain, nonatomic) NSMutableDictionary *imageCache;
@property (retain, nonatomic) CPBitmapStore *serializedCache;

+ (id)sharedCache;
+ (double)letterpressImagePadding;
+ (id)imageWithLetterpressAlignmentInsetsForImage:(id)arg1;
+ (id)serializedCacheKeyForImageNamed:(id)arg1 tintColor:(id)arg2 scale:(double)arg3 appearanceInfo:(id)arg4 version:(unsigned long long)arg5;
+ (id)letterpressedImageForImage:(id)arg1 tintColor:(id)arg2 scale:(double)arg3 addAlignmentInsets:(_Bool)arg4 appearanceInfo:(id)arg5;

- (id)init;
- (void)purge;
- (id)imageWithCacheName:(id)arg1 tintColor:(id)arg2 addAlignmentInsets:(_Bool)arg3 appearanceInfo:(id)arg4 version:(unsigned long long)arg5 imageCreationBlock:(CDUnknownBlockType)arg6;
- (id)imageNamed:(id)arg1 tintColor:(id)arg2 addAlignmentInsets:(_Bool)arg3 appearanceInfo:(id)arg4 version:(unsigned long long)arg5;
- (id)imageNamed:(id)arg1 tintColor:(id)arg2 appearanceInfo:(id)arg3 version:(unsigned long long)arg4;

@end
