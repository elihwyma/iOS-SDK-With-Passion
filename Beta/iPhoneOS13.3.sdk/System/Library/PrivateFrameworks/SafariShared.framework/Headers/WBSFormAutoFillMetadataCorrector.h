/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSCache, NSMutableSet, NSString, WBSFormAutoFillClassificationToCorrectionsTransformer;

@protocol WBSFormAutoFillCorrectionsStore;

@interface WBSFormAutoFillMetadataCorrector : NSObject

{
    id <WBSFormAutoFillCorrectionsStore> _correctionsStore;
    NSCache *_fingerprintsToCorrections;
    WBSFormAutoFillClassificationToCorrectionsTransformer *_classificationToCorrectionsTransformer;
    NSMutableSet *_correctedFormMetadataID;
    NSString *_domain;
}

@property (nonatomic, readonly) NSString *domain;

- (id)init;
- (id)initWithDomain:(id)arg1;
- (void)enqueueCorrectionsRequestForFormMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)bestAvailableMetadataFromMetadata:(id)arg1;
- (id)bestAvailableMetadataFromControlMetadata:(id)arg1;
- (void)_commonInitWithDomain:(id)arg1 correctionsStore:(id)arg2;
- (_Bool)hasAttemptedToCorrectMetadata:(id)arg1;

@end
