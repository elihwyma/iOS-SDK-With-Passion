//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/BSDescriptionProviding-Protocol.h>

@class NSData, NSString;

@interface SBFWallpaperOptions : NSObject <NSCopying, BSDescriptionProviding, NSSecureCoding>
{
    BOOL _magnifyEnabled;
    BOOL _supportsCropping;
    BOOL _portrait;
    BOOL _hasVideo;
    NSString *_name;
    double _parallaxFactor;
    double _zoomScale;
    double _stillTimeInVideo;
    long long _wallpaperMode;
    long long _wallpaperStatus;
    CGRect _cropRect;
}

+ (BOOL)supportsSecureCoding;
+ (id)optionsWithName:(id)arg1 parallaxFactor:(double)arg2 zoomScale:(double)arg3 supportsCropping:(BOOL)arg4 cropRect:(CGRect)arg5 portrait:(BOOL)arg6 hasVideo:(BOOL)arg7 stillTimeInVideo:(double)arg8 wallpaperMode:(long long)arg9 wallpaperStatus:(long long)arg10;
+ (id)optionsWithName:(id)arg1 parallaxFactor:(double)arg2 zoomScale:(double)arg3 supportsCropping:(BOOL)arg4 cropRect:(CGRect)arg5 portrait:(BOOL)arg6 hasVideo:(BOOL)arg7 stillTimeInVideo:(double)arg8;
+ (id)optionsWithName:(id)arg1 parallaxFactor:(double)arg2 zoomScale:(double)arg3 supportsCropping:(BOOL)arg4 cropRect:(CGRect)arg5 portrait:(BOOL)arg6;
@property(nonatomic) long long wallpaperStatus; // @synthesize wallpaperStatus=_wallpaperStatus;
@property(nonatomic) long long wallpaperMode; // @synthesize wallpaperMode=_wallpaperMode;
@property(nonatomic) double stillTimeInVideo; // @synthesize stillTimeInVideo=_stillTimeInVideo;
@property(nonatomic) BOOL hasVideo; // @synthesize hasVideo=_hasVideo;
@property(nonatomic, getter=isPortrait) BOOL portrait; // @synthesize portrait=_portrait;
@property(nonatomic) CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(nonatomic) BOOL supportsCropping; // @synthesize supportsCropping=_supportsCropping;
@property(nonatomic) double zoomScale; // @synthesize zoomScale=_zoomScale;
@property(nonatomic, getter=isMagnifyEnabled) BOOL magnifyEnabled; // @synthesize magnifyEnabled=_magnifyEnabled;
@property(nonatomic) double parallaxFactor; // @synthesize parallaxFactor=_parallaxFactor;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSData *persistentDataRepresentation;
- (BOOL)writeToURL:(id)arg1 error:(id )arg2;
- (id)persistentPropertyList;
@property(readonly) NSUInteger hash;
- (BOOL)isLooselyEqualToWallpaperOptions:(id)arg1;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (CGSize)bestWallpaperSizeForWallpaperSize:(CGSize)arg1 wallpaperScale:(double)arg2 deviceType:(long long)arg3 imageScale:(double)arg4;
@property(readonly, nonatomic) BOOL parallaxEnabled;
- (id)initWithStream:(id)arg1;
- (id)initWithPersistentDataRepresentation:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)init;
- (id)initWithName:(id)arg1 parallaxFactor:(double)arg2 zoomScale:(double)arg3 supportsCropping:(BOOL)arg4 cropRect:(CGRect)arg5 portrait:(BOOL)arg6 hasVideo:(BOOL)arg7 stillTimeInVideo:(double)arg8 wallpaperMode:(long long)arg9 wallpaperStatus:(long long)arg10;

@end

