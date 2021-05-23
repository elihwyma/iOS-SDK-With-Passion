/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class PXFeedbackStore;

@interface PXFeedbackCollector : NSObject

{
    PXFeedbackStore *_feedbackStore;
}

@property (nonatomic, readonly) PXFeedbackStore *feedbackStore;

- (id)init;
- (id)_appVersion;
- (id)feedbackEntryFromDictionary:(id)arg1;
- (void)addFeedbackEntry:(id)arg1;
- (id)addFeedbackFromDictionary:(id)arg1;
- (void)removeFeedbackEntry:(id)arg1;
- (id)_uniqueSystemIdentifier;

@end
