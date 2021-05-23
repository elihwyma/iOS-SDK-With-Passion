/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <Foundation/NSObject.h>

@class CHRecognitionSession;

@protocol CHVisualizationDelegate;

@interface CHVisualization : NSObject

{
    CHRecognitionSession *_recognitionSession;
    id <CHVisualizationDelegate> _delegate;
}

@property (nonatomic, readonly) long long layeringPriority;
@property (nonatomic, readonly) _Bool wantsInputDrawings;
@property (retain, nonatomic, readonly) CHRecognitionSession *recognitionSession;
@property (nonatomic) id <CHVisualizationDelegate> delegate;

- (void)dealloc;
- (id)initWithRecognitionSession:(id)arg1;
- (void)drawVisualizationInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 viewBounds:(struct CGRect)arg3;
- (void)recognitionSessionDidUpdateRecognitionResult;
- (void)toggleVisualizationRegionAtPoint:(struct CGPoint)arg1;

@end
