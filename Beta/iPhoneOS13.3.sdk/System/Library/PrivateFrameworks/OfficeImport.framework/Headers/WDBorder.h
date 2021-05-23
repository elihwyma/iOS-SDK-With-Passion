/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class OITSUColor;

__attribute__((visibility("hidden")))
@interface WDBorder : NSObject <Swift>

{
    int mStyle;
    OITSUColor *mColor;
    unsigned char mWidth;
    unsigned char mSpace;
    _Bool mShadow;
    _Bool mFrame;
}

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)style;
- (void)setStyle:(int)arg1;
- (unsigned char)width;
- (id)color;
- (void)setWidth:(unsigned char)arg1;
- (void)setColor:(id)arg1;
- (_Bool)frame;
- (_Bool)shadow;
- (unsigned char)space;
- (void)setFrame:(_Bool)arg1;
- (void)setShadow:(_Bool)arg1;
- (void)setBorder:(id)arg1;
- (void)setSpace:(unsigned char)arg1;
- (_Bool)isEqualToBorder:(id)arg1;
- (void)setNullBorder;
- (void)setSingleBlackBorder;

@end
