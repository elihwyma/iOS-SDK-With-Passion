/*
 Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

#import <Foundation/NSObject.h>

@protocol ASVFeedbackGenerator;

@interface ASVGestureFeedbackGenerator : NSObject

{
    id <ASVFeedbackGenerator> _snapToScaleFeedbackGenerator;
    id <ASVFeedbackGenerator> _snapAwayFromScaleFeedbackGenerator;
}

@property (retain, nonatomic) id <ASVFeedbackGenerator> snapToScaleFeedbackGenerator;
@property (retain, nonatomic) id <ASVFeedbackGenerator> snapAwayFromScaleFeedbackGenerator;

- (void)prepare;
- (id)initWithSnapToGenerator:(id)arg1 snapAwayFromGenerator:(id)arg2;

@end
