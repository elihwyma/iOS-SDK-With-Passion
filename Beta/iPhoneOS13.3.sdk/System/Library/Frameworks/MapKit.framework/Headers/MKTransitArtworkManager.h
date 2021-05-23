/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class VKIconManager;

@interface MKTransitArtworkManager : NSObject

{
    VKIconManager *_iconManager;
}

@property (nonatomic, readonly) VKIconManager *iconManager;

+ (id)sharedInstance;

- (void)purge;
- (id)initWithIconManager:(id)arg1;
- (id)_vkImageWithShieldDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 nightMode:(_Bool)arg5 widthPaddingMultiple:(double)arg6;
- (id)_imageFroMVKImage:(id)arg1;
- (id)_createImageWithBlockInAutoreleasePoolIfNeeded:(CDUnknownBlockType)arg1;
- (id)transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 nightMode:(_Bool)arg5 withWidthPaddingMultiple:(double)arg6;
- (id)_imageWithDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 nightMode:(_Bool)arg5 withWidthPaddingMultiple:(double)arg6 fullBleedColor:(id *)arg7;
- (_Bool)_isMemoryConstrained;
- (id)transitArtworkImageWithShieldDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 nightMode:(_Bool)arg5;
- (id)transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 nightMode:(_Bool)arg5;
- (id)transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 nightMode:(_Bool)arg5 withWidthPaddingMultiple:(double)arg6 fullBleedColor:(id *)arg7;

@end
