/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIView.h>

@interface PKSpaceInsertionView : UIView

{
    struct CGPath *_lassoPath;
    struct CGPoint _handleLocation;
    double _scale;
    _Bool _isDragging;
    unsigned long long _insertionType;
}

@property (nonatomic) unsigned long long insertionType;
@property (nonatomic) _Bool isDragging;

- (void)dealloc;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 insertionType:(unsigned long long)arg2 path:(struct CGPath *)arg3 handleLocation:(struct CGPoint)arg4 scale:(double)arg5;

@end
