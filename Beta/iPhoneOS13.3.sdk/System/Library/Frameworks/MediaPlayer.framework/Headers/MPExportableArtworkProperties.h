/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class ICStoreArtworkInfo, NSArray, NSString;

@interface MPExportableArtworkProperties : NSObject

{
    NSString *_resolvedURLString;
    NSArray *_artworkTemplateItems;
    unsigned long long _mediaType;
    long long _mediaLibraryArtworkType;
}

@property (nonatomic, readonly) ICStoreArtworkInfo *artworkInfo;
@property (copy, nonatomic) NSString *resolvedURLString;
@property (copy, nonatomic) NSArray *artworkTemplateItems;
@property (nonatomic) unsigned long long mediaType;
@property (nonatomic) long long mediaLibraryArtworkType;
@property (nonatomic, readonly, getter=isValid) _Bool valid;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
