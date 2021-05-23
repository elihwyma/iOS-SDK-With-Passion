/*
 Image: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
 */

#import <UIKit/UIView.h>

@interface SUICFauxFlamesView : UIView

{
    long long _style;
    double _width;
    CDStruct_65a63019 _sequenceAttributes;
}

+ (id)_frameImagesForSequence:(CDStruct_65a63019)arg1;

- (id)initWithCoder:(id)arg1;
- (void)prewarm;
- (void)setHidden:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1;
- (_Bool)isAnimating;
- (void)didMoveToSuperview;
- (void)start:(_Bool)arg1;
- (void)stop:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 screenSize:(long long)arg2;
- (void)_cleanupView;

@end
