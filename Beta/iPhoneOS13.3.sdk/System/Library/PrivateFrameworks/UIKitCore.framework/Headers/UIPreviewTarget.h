/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class UIView;

@interface UIPreviewTarget : NSObject <Swift>

{
    UIView *_container;
    struct CGPoint _center;
    struct CGAffineTransform _transform;
}

@property (nonatomic, readonly) UIView *container;
@property (nonatomic, readonly) struct CGPoint center;
@property (nonatomic, readonly) struct CGAffineTransform transform;

+ (id)new;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContainer:(id)arg1 center:(struct CGPoint)arg2 transform:(struct CGAffineTransform)arg3;
- (id)initWithContainer:(id)arg1 center:(struct CGPoint)arg2;

@end
