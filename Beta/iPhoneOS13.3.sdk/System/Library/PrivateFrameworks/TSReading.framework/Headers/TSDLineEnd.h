/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@class NSString;

@interface TSDLineEnd : NSObject <Swift>

{
    struct CGPath *mPath;
    struct CGPath *mWrapPath;
    struct CGPoint mEndPoint;
    _Bool mIsFilled;
    NSString *mIdentifier;
    int mLineJoin;
}

@property (nonatomic, readonly) struct CGPath *path;
@property (nonatomic, readonly) struct CGPath *wrapPath;
@property (nonatomic, readonly) struct CGPoint endPoint;
@property (nonatomic, readonly) _Bool isFilled;
@property (nonatomic, readonly) _Bool isNone;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) int lineJoin;

+ (id)line;
+ (id)lineEndWithPath:(struct CGPath *)arg1 wrapPath:(struct CGPath *)arg2 endPoint:(struct CGPoint)arg3 isFilled:(_Bool)arg4 identifier:(id)arg5;
+ (id)lineEndWithIdentifier:(id)arg1;
+ (id)lineEndWithPath:(struct CGPath *)arg1 endPoint:(struct CGPoint)arg2 isFilled:(_Bool)arg3 identifier:(id)arg4;
+ (id)simpleArrow;
+ (id)filledCircle;
+ (id)filledDiamond;
+ (id)openArrow;
+ (id)filledArrow;
+ (id)filledSquare;
+ (id)openSquare;
+ (id)openCircle;
+ (id)invertedArrow;
+ (id)none;
+ (id)lineEndWithType:(int)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPath:(struct CGPath *)arg1 wrapPath:(struct CGPath *)arg2 endPoint:(struct CGPoint)arg3 isFilled:(_Bool)arg4 identifier:(id)arg5 lineJoin:(int)arg6;
- (id)initWithPath:(struct CGPath *)arg1 endPoint:(struct CGPoint)arg2 isFilled:(_Bool)arg3 identifier:(id)arg4;
- (struct CGImage *)newLineEndImageOnRight:(_Bool)arg1 forContentsScale:(double)arg2 withSize:(struct CGSize)arg3;

@end
