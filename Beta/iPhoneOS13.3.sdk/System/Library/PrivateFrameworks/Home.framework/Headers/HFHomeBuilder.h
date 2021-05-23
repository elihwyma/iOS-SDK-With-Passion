/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemBuilder.h>

@class HFWallpaperEditCollectionBuilder, NSString;

@interface HFHomeBuilder : HFItemBuilder

{
    NSString *_name;
    NSString *_userNotes;
    HFWallpaperEditCollectionBuilder *_wallpaperBuilder;
}

@property (retain, nonatomic) HFWallpaperEditCollectionBuilder *wallpaperBuilder;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *userNotes;

+ (Class)homeKitRepresentationClass;

- (void)setHome:(id)arg1;
- (id)updateName;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (id)commitItem;
- (id)performValidation;
- (id)createHome;
- (id)updateUserNotes;

@end
