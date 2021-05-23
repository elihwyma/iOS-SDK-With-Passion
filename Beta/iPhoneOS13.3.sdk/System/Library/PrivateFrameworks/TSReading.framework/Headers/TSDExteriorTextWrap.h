/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@interface TSDExteriorTextWrap : NSObject <Swift>

{
    _Bool _isHTMLWrap;
    int _type;
    int _direction;
    int _fitType;
    double _margin;
    double _alphaThreshold;
}

@property (nonatomic, readonly) _Bool isHTMLWrap;
@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) int direction;
@property (nonatomic, readonly) int fitType;
@property (nonatomic, readonly) double margin;
@property (nonatomic, readonly) double alphaThreshold;

+ (id)exteriorTextWrapWithIsHTMLWrap:(_Bool)arg1 type:(int)arg2 direction:(int)arg3 fitType:(int)arg4 margin:(double)arg5 alphaThreshold:(double)arg6;
+ (id)exteriorTextWrap;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithIsHTMLWrap:(_Bool)arg1 type:(int)arg2 direction:(int)arg3 fitType:(int)arg4 margin:(double)arg5 alphaThreshold:(double)arg6;

@end
