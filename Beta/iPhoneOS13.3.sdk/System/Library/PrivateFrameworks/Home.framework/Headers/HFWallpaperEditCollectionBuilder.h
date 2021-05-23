/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HFWallpaperEditCollection, NAFuture;

@protocol HFHomeKitObject><HMApplicationData;

@interface HFWallpaperEditCollectionBuilder : NSObject

{
    _Bool _hkObjectNewlyCreated;
    id <HFHomeKitObject><HMApplicationData> _hkObject;
    long long _namedWallpaperCollectionType;
    NAFuture *_initialEditCollectionFuture;
    HFWallpaperEditCollection *_updatedEditCollection;
}

@property (nonatomic) long long namedWallpaperCollectionType;
@property (nonatomic) _Bool hkObjectNewlyCreated;
@property (retain, nonatomic) NAFuture *initialEditCollectionFuture;
@property (retain, nonatomic) HFWallpaperEditCollection *updatedEditCollection;
@property (retain, nonatomic) id <HFHomeKitObject><HMApplicationData> hkObject;

- (id)description;
- (id)editCollectionForWallpaper:(id)arg1 image:(id)arg2;
- (id)initWithHomeKitObject:(id)arg1 namedWallpaperCollectionType:(long long)arg2;
- (id)wallpaperEditCollectionFuture;
- (void)setWallpaper:(id)arg1 image:(id)arg2;
- (id)commitWallpaper;

@end
