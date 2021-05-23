/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface WLKArtworkVariant : NSObject

{
    NSString *_artworkURLTemplate;
    _Bool _supportsLayeredImage;
    _Bool _alpha;
    NSString *_artworkURLString;
    long long _artworkType;
    NSString *_format;
    struct CGSize _artworkSize;
}

@property (copy, nonatomic, readonly) NSURL *artworkURL;
@property (copy, nonatomic, readonly) NSString *artworkURLString;
@property (nonatomic, readonly) struct CGSize artworkSize;
@property (nonatomic, readonly) long long artworkType;
@property (copy, nonatomic, readonly) NSString *format;
@property (nonatomic) _Bool supportsLayeredImage;
@property (nonatomic, getter=hasAlpha) _Bool alpha;

+ (id)artworkURLFromTemplate:(id)arg1 forSize:(struct CGSize)arg2 cropCode:(id)arg3 format:(id)arg4;
+ (id)artworkURLFromTemplate:(id)arg1 forSize:(struct CGSize)arg2 format:(id)arg3;

- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)artworkURLForSize:(struct CGSize)arg1;
- (id)artworkURLForSize:(struct CGSize)arg1 format:(id)arg2;
- (id)artworkURLForSize:(struct CGSize)arg1 cropCode:(id)arg2 format:(id)arg3;
- (id)_sizeDescription:(struct CGSize)arg1;
- (id)artworkSizeTemplateURL;

@end
