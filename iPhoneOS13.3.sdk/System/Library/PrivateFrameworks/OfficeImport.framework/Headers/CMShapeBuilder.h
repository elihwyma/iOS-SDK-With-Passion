//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, OADOrientedBounds;

__attribute__((visibility("hidden")))
@interface CMShapeBuilder : NSObject
{
    int _type;
    OADOrientedBounds *_orientedBounds;
    NSUInteger _format;
    NSDictionary *_adjustValues;
}

+ (CGRect)canonicalBounds;
// - (void).cxx_destruct;
- (CGPath )copyShapeWithTransform:(CGAffineTransform)arg1;
- (float)maxAdjustedValue;
- (BOOL)isOffice12;
- (CGAffineTransform)affineTransform;
- (void)setAdjustValues:(id)arg1;
- (void)setFileFormat:(NSUInteger)arg1;
- (void)setShapeType:(int)arg1;
- (void)setOrientedBounds:(id)arg1;

@end
