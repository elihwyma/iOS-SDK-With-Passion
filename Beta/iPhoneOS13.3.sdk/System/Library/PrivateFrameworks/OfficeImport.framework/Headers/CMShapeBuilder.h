/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSDictionary, OADOrientedBounds;

__attribute__((visibility("hidden")))
@interface CMShapeBuilder : NSObject

{
    int _type;
    OADOrientedBounds *_orientedBounds;
    unsigned long long _format;
    NSDictionary *_adjustValues;
}

+ (struct CGRect)canonicalBounds;

- (struct CGAffineTransform)affineTransform;
- (void)setFileFormat:(unsigned long long)arg1;
- (_Bool)isOffice12;
- (void)setOrientedBounds:(id)arg1;
- (struct CGPath *)copyShapeWithTransform:(struct CGAffineTransform)arg1;
- (void)setShapeType:(int)arg1;
- (void)setAdjustValues:(id)arg1;
- (float)maxAdjustedValue;

@end
