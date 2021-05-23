/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface _UIAttributedStringView : UIView

{
    NSAttributedString *_string;
}

+ (Class)layerClass;

- (void)dealloc;
- (void)setString:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didMoveToSuperview;
- (void)_updateContentsScale:(id)arg1;
- (void)setTextRotationAngle:(double)arg1;

@end
