/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class WBSFormAutoFillClassificationToCorrectionsTransformer;

@protocol WBSFormAutoFillCorrectionManagerDelegate;

@interface WBSFormAutoFillCorrectionManager : NSObject

{
    WBSFormAutoFillClassificationToCorrectionsTransformer *_classificationToCorrectionsTransformer;
    id <WBSFormAutoFillCorrectionManagerDelegate> _delegate;
}

@property (weak, nonatomic) id <WBSFormAutoFillCorrectionManagerDelegate> delegate;

- (id)_correctionsStore;
- (void)_setCorrections:(id)arg1 forFingerprint:(id)arg2 onDomain:(id)arg3;
- (id)_feedbackProcessor;
- (void)getCorrectionsForFormFieldFingerprint:(id)arg1 onDomain:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setCorrectionSet:(id)arg1;

@end
