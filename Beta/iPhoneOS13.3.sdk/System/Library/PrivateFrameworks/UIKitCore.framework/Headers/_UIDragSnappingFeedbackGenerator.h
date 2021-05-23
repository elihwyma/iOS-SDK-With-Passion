/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIDragFeedbackGenerator.h>

@class _UIDragSnappingFeedbackGeneratorConfiguration;

@interface _UIDragSnappingFeedbackGenerator : _UIDragFeedbackGenerator

@property (nonatomic, readonly, getter=_dragSnappingConfiguration) _UIDragSnappingFeedbackGeneratorConfiguration *dragSnappingConfiguration;

+ (Class)_configurationClass;

- (void)userInteractionStarted;
- (void)userInteractionEnded;
- (void)objectSnapped;
- (void)draggedObjectLifted;
- (void)draggedObjectLanded;
- (void)_stopLanding;
- (void)_startLanding;

@end
