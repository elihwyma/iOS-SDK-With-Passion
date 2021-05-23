/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class MPMediaItem, NSString, NSURL, OKProducerPreset;

__attribute__((visibility("hidden")))
@interface PUSlideshowMediaItem : NSObject

{
    MPMediaItem *_mediaItem;
    OKProducerPreset *_preset;
    long long _type;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSURL *audioURL;
@property (nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic, readonly) NSString *localizedName;

+ (id)mediaItemsForOKThemes;
+ (id)mediaItemForType:(long long)arg1 uniqueIdentifier:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithType:(long long)arg1;
- (id)initWitPreset:(id)arg1;
- (id)initWitMediaItem:(id)arg1;

@end
