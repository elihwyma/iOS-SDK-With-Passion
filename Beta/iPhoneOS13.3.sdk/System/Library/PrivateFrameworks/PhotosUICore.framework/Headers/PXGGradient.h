/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class UIColor;

@interface PXGGradient : NSObject <Swift>

{
    struct UIColor *_startingColor;
    struct UIColor *_endingColor;
    long long _direction;
}

@property (copy, nonatomic, readonly) UIColor *startingColor;
@property (copy, nonatomic, readonly) UIColor *endingColor;
@property (nonatomic, readonly) long long direction;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStartingColor:(struct UIColor *)arg1 endingColor:(struct UIColor *)arg2 direction:(long long)arg3;

@end
