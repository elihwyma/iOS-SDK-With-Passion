/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponentMask.h>

@class NSString;

@interface SXCornersComponentMask : SXComponentMask

@property (nonatomic, readonly) struct _SXConvertibleValue radius;
@property (nonatomic, readonly) _Bool topLeft;
@property (nonatomic, readonly) _Bool topRight;
@property (nonatomic, readonly) _Bool bottomRight;
@property (nonatomic, readonly) _Bool bottomLeft;
@property (nonatomic, readonly) unsigned long long cornerMask;
@property (nonatomic, readonly) NSString *curve;

- (_Bool)cornerWithValue:(id)arg1 withType:(int)arg2;
- (_Bool)topLeftWithValue:(id)arg1 withType:(int)arg2;
- (_Bool)topRightWithValue:(id)arg1 withType:(int)arg2;
- (_Bool)bottomRightWithValue:(id)arg1 withType:(int)arg2;
- (_Bool)bottomLeftWithValue:(id)arg1 withType:(int)arg2;
- (id)curveWithValue:(id)arg1 withType:(int)arg2;

@end
