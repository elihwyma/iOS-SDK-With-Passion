//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

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

@property(readonly, nonatomic) NSString *domain; // @synthesize domain=_domain;
// - (void).cxx_destruct;
- (id)bestAvailableMetadataFromControlMetadata:(id)arg1;
- (id)bestAvailableMetadataFromMetadata:(id)arg1;
- (BOOL)hasAttemptedToCorrectMetadata:(id)arg1;
- (void)enqueueCorrectionsRequestForFormMetadata:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_commonInitWithDomain:(id)arg1 correctionsStore:(id)arg2;
- (id)init;
- (id)initWithDomain:(id)arg1;

@end

