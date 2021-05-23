/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXJSONObject.h>

@class SXDataTableBorder, SXUnitConverter;

@interface SXDataTableBorderSides : SXJSONObject

{
    SXUnitConverter *_unitConverter;
}

@property (nonatomic, readonly) SXDataTableBorder *top;
@property (nonatomic, readonly) SXDataTableBorder *right;
@property (nonatomic, readonly) SXDataTableBorder *bottom;
@property (nonatomic, readonly) SXDataTableBorder *left;
@property (retain, nonatomic) SXUnitConverter *unitConverter;

- (id)borderForValue:(id)arg1;
- (id)topWithValue:(id)arg1 withType:(int)arg2;
- (id)rightWithValue:(id)arg1 withType:(int)arg2;
- (id)bottomWithValue:(id)arg1 withType:(int)arg2;
- (id)leftWithValue:(id)arg1 withType:(int)arg2;

@end
