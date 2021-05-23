/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FBSDisplayMode : NSObject

{
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _preferredScale;
    double _scaleOverride;
    double _refreshRate;
    long long _gamut;
    long long _hdr;
    long long _rotation;
    _Bool _virtual;
}

@property (nonatomic, readonly) struct CGSize pixelSize;
@property (nonatomic, readonly) struct CGSize nativePixelSize;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) double refreshRate;
@property (nonatomic, readonly) long long colorGamut;
@property (nonatomic, readonly) long long hdrMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)_emptyMode;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)_width;
- (unsigned long long)_height;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (long long)_rotation;
- (id)_initWithCADisplayMode:(id)arg1 scale:(double)arg2 rotation:(long long)arg3;
- (id)_referenceSizeDescription;
- (id)_initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 preferredScale:(unsigned long long)arg3 scaleOverride:(double)arg4 refreshRate:(double)arg5 gamut:(long long)arg6 hdr:(long long)arg7 rotation:(long long)arg8 virtual:(_Bool)arg9 validityCheck:(long long)arg10;
- (id)_initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 scale:(unsigned long long)arg3 refreshRate:(double)arg4 gamut:(long long)arg5 hdr:(long long)arg6;
- (id)_copyWithOverrideSize:(struct CGSize)arg1;
- (_Bool)_isVirtualMode;
- (unsigned long long)_caWidth;
- (unsigned long long)_caHeight;
- (unsigned long long)_caPreferredScale;
- (double)_caRefreshRate;
- (id)_caColorGamut;
- (id)_caHDRMode;

@end
