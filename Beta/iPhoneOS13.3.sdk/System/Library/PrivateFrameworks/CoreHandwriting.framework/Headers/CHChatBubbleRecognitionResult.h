/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <CoreHandwriting/CHEllipseRecognitionResult.h>

@interface CHChatBubbleRecognitionResult : CHEllipseRecognitionResult

{
    double _stemWidth;
    struct CGPoint _stemLocation;
}

@property (readonly) struct CGPoint stemLocation;
@property (readonly) double stemWidth;

- (id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3 center:(struct CGPoint)arg4 size:(struct CGSize)arg5 stemLocation:(struct CGPoint)arg6 stemWidth:(double)arg7;

@end
