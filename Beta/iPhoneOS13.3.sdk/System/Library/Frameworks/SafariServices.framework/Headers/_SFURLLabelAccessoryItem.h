/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class UIImageView, UIView, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _SFURLLabelAccessoryItem : NSObject

{
    _Bool _centerAligned;
    UIImageView *_view;
    UIImageView *_squishedView;
    UIVisualEffectView *_effectView;
    UIVisualEffectView *_squishedEffectView;
    double _spacing;
    struct CGSize _size;
}

@property (retain, nonatomic) UIImageView *view;
@property (retain, nonatomic) UIImageView *squishedView;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UIVisualEffectView *squishedEffectView;
@property (nonatomic, readonly) UIView *viewForLayout;
@property (nonatomic) struct CGRect frame;
@property (nonatomic) double spacing;
@property (nonatomic) struct CGSize size;
@property (nonatomic) _Bool centerAligned;

@end
