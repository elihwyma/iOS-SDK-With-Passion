/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, UIBarButtonItemAppearance, UIImage, _UIBarButtonItemData;

@interface UIBarButtonItemStateAppearance : NSObject

{
    UIBarButtonItemAppearance *_owner;
    long long _state;
    _UIBarButtonItemData *_data;
    NSArray *_itemEffects;
}

@property (retain, nonatomic) _UIBarButtonItemData *data;
@property (copy, nonatomic) NSArray *itemEffects;
@property (copy, nonatomic) NSDictionary *titleTextAttributes;
@property (nonatomic) struct UIOffset titlePositionAdjustment;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (nonatomic) struct UIOffset backgroundImagePositionAdjustment;

- (id)init;
- (void)_writeToStorage:(CDUnknownBlockType)arg1;
- (id)_initWithOwner:(id)arg1 data:(id)arg2 state:(long long)arg3;
- (void)_clearOwner;

@end
