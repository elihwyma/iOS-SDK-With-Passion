/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, UIView;

@interface _UIViewPropertyAnimationDescription : NSObject

{
    NSMutableDictionary *_updates;
    UIView *_view;
}

@property (nonatomic, readonly) NSMutableDictionary *updates;
@property (weak, nonatomic, readonly) UIView *view;

- (id)init;
- (id)initWithView:(id)arg1;
- (void)_addUpdate:(id)arg1;

@end
