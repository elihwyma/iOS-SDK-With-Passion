/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIASCIIArtFramesRenderer : NSObject

{
    NSArray *_frames;
    double _outputLineWidth;
}

@property (nonatomic, readonly) NSArray *frames;
@property (nonatomic, readonly) double outputLineWidth;

- (id)description;
- (id)initWithFrames:(id)arg1;
- (id)visualDescription;
- (id)_normalizeFrames:(id)arg1;
- (id)initWithFrames:(id)arg1 outputLineWidth:(double)arg2;
- (id)renderedLines;
- (struct CGRect)scaledRectForRect:(struct CGRect)arg1 scaleSize:(struct CGSize)arg2;

@end
