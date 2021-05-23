/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

#import <VideosUI/Swift-Protocol.h>

@interface VUIMediaEntityType : NSObject <Swift>

{
    _Bool _rental;
    unsigned long long _subtype;
    unsigned long long _mediaCategoryType;
    unsigned long long _mediaCollectionType;
}

@property (nonatomic) unsigned long long subtype;
@property (nonatomic) unsigned long long mediaCategoryType;
@property (nonatomic) unsigned long long mediaCollectionType;
@property (nonatomic, getter=isRental) _Bool rental;

+ (id)show;
+ (id)movie;
+ (id)season;
+ (id)episode;
+ (id)movieRental;
+ (id)homeVideo;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)stringDescription;
- (id)_initWithMediaItemCategoryType:(unsigned long long)arg1 isRental:(_Bool)arg2;
- (id)_initWithMediaCollectionType:(unsigned long long)arg1 mediaCategoryType:(unsigned long long)arg2;

@end
