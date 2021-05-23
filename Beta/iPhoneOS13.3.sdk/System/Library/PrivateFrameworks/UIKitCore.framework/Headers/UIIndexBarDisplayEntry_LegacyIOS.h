/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIIndexBarDisplayEntry.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface UIIndexBarDisplayEntry_LegacyIOS : UIIndexBarDisplayEntry

{
    UIImage *_image;
    id _line;
    struct CGPoint _baselinePoint;
    struct CGRect _bounds;
    struct CGRect _typeBounds;
}

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) id line;
@property (nonatomic) struct CGRect bounds;
@property (nonatomic) struct CGRect typeBounds;
@property (nonatomic) struct CGPoint baselinePoint;

- (id)description;

@end
