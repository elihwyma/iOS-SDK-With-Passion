/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, _UITapticEngine;

@protocol OS_dispatch_queue;

@interface SBFTapticEngine : NSObject

{
    _UITapticEngine *_tapticEngine;
    NSMutableSet *_previewReasons;
    NSMutableSet *_commitReasons;
    NSMutableSet *_cancelledReasons;
    NSObject<OS_dispatch_queue> *_previewReasonsQueue;
    NSObject<OS_dispatch_queue> *_commitReasonsQueue;
    NSObject<OS_dispatch_queue> *_cancelledReasonsQueue;
    _Bool _supportsFeedbackActuation;
}

@property (nonatomic, readonly) _Bool supportsFeedbackActuation;

+ (id)sharedInstance;

- (id)init;
- (void)actuateFeedback:(long long)arg1;
- (void)warmUpForFeedback:(unsigned long long)arg1 withReason:(id)arg2;
- (void)coolDownForFeedback:(unsigned long long)arg1 withReason:(id)arg2;

@end
