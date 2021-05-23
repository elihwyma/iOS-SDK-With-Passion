/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class NSArray, TVPlaylist, UIColor, UIView;

@interface TVMediaInfo : NSObject

{
    long long _intent;
    UIView *_contentView;
    UIColor *_backgroundColor;
    NSArray *_imageProxies;
    TVPlaylist *_playlist;
    UIView *_overlayView;
}

@property (nonatomic) long long intent;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) NSArray *imageProxies;
@property (retain, nonatomic) TVPlaylist *playlist;
@property (retain, nonatomic) UIView *overlayView;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
