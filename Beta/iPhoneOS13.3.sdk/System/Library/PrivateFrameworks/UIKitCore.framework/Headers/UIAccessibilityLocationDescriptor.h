/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSAttributedString, NSString, UIView;

@interface UIAccessibilityLocationDescriptor : NSObject

{
    UIView *_view;
    NSAttributedString *_attributedName;
    struct CGPoint _point;
}

@property (weak, nonatomic, readonly) UIView *view;
@property (nonatomic, readonly) struct CGPoint point;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSAttributedString *attributedName;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 point:(struct CGPoint)arg2 inView:(id)arg3;
- (id)initWithAttributedName:(id)arg1 point:(struct CGPoint)arg2 inView:(id)arg3;
- (id)initWithName:(id)arg1 view:(id)arg2;

@end
