/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

#import <Home/Swift-Protocol.h>

@class NSString, UIImage;

@interface HFWallpaperSlice : NSObject <Swift>

{
    long long _type;
    long long _variant;
    UIImage *_image;
    NSString *_identifier;
}

@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) long long variant;
@property (nonatomic, readonly) UIImage *image;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(long long)arg1 variant:(long long)arg2 identifier:(id)arg3 image:(id)arg4;
- (_Bool)isSlicedFromWallpaper:(id)arg1;

@end
