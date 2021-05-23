/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UITextSelectionRect.h>

@class UITextRange;

@interface TSDTextSelectionRect : UITextSelectionRect

{
    struct CGRect _rect;
    long long _writingDirection;
    UITextRange *_range;
    _Bool _containsStart;
    _Bool _containsEnd;
    _Bool _isVertical;
}

@property (retain, nonatomic) UITextRange *range;

- (void)dealloc;
- (_Bool)isVertical;
- (_Bool)containsStart;
- (_Bool)containsEnd;
- (struct CGRect)rect;
- (long long)writingDirection;
- (id)initWithRect:(struct CGRect)arg1 direction:(long long)arg2 range:(id)arg3 containsStart:(_Bool)arg4 containsEnd:(_Bool)arg5 isVertical:(_Bool)arg6;

@end
