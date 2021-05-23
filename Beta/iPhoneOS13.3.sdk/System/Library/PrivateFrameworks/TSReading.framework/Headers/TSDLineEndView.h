/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UIView.h>

@class TSDLineEnd;

@interface TSDLineEndView : UIView

{
    TSDLineEnd *mLineEnd;
    _Bool mOnRight;
}

@property (retain, nonatomic) TSDLineEnd *lineEnd;
@property (nonatomic) _Bool onRight;

+ (id)viewWithLineEnd:(id)arg1 onRight:(_Bool)arg2;

- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;

@end
