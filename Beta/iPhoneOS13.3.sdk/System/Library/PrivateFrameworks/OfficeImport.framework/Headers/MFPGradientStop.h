/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class OITSUColor;

__attribute__((visibility("hidden")))
@interface MFPGradientStop : NSObject

{
    OITSUColor *mColor;
    float mPosition;
}

- (float)position;
- (id)color;
- (id)initWithColor:(id)arg1 position:(float)arg2;

@end
