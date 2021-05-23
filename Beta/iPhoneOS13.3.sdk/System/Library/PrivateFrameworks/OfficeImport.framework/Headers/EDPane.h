/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class EDReference;

__attribute__((visibility("hidden")))
@interface EDPane : NSObject

{
    double mXSplitPosition;
    double mYSplitPosition;
    EDReference *mTopLeftCell;
    int mActivePane;
    int mPaneState;
}

+ (id)pane;

- (id)init;
- (id)description;
- (int)activePane;
- (void)setActivePane:(int)arg1;
- (int)paneState;
- (void)setPaneState:(int)arg1;
- (void)setXSplitPosition:(double)arg1;
- (void)setYSplitPosition:(double)arg1;
- (void)setTopLeftCell:(id)arg1;
- (double)xSplitPosition;
- (double)ySplitPosition;
- (id)topLeftCell;

@end
