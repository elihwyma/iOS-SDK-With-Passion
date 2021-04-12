//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LinkPresentation/LPMetadataProviderSpecialization.h>

@class LPFetcherGroup, LPSpecializationMetadata, LPiTunesMediaLookupTask, NSString;
@protocol LPiTunesMediaUnresolvedMetadata;

__attribute__((visibility("hidden")))
@interface LPiTunesMediaMetadataProviderSpecialization : LPMetadataProviderSpecialization
{
    NSString *_identifier;
    NSString *_storefrontCountryCode;
    BOOL _canceled;
    LPiTunesMediaLookupTask *_lookupTask;
    LPSpecializationMetadata *_resolvedMetadata;
    id <LPiTunesMediaUnresolvedMetadata> _unresolvedMetadata;
    LPFetcherGroup *_fetcherGroup;
}

+ (id)extractOffers:(id)arg1;
+ (id)assetFromVideoPreviewDictionary:(id)arg1 usingPreferredPlatformArray:(id)arg2;
+ (id)assetArrayFromScreenshotDictionary:(id)arg1 usingPreferredPlatformArray:(id)arg2;
+ (id)assetArrayFromScreenshotArray:(id)arg1;
+ (id)assetArrayScreenshotArray:(id)arg1;
+ (long long)determineOrientationOfScreenshotsInArray:(id)arg1;
+ (id)specializedMetadataProviderForMetadata:(id)arg1 withContext:(id)arg2;
+ (id)specializedMetadataProviderForURLWithContext:(id)arg1;
+ (NSUInteger)specialization;
// - (void).cxx_destruct;
- (void)done;
- (void)fail;
- (void)cancel;
- (void)completed;
- (void)start;
- (void)resolve;
- (id)processResponseDictionary:(id)arg1 withStorefrontIdentifier:(id)arg2;
- (id)schema;
- (id)initWithIdentifier:(id)arg1 storefrontCountryCode:(id)arg2 withContext:(id)arg3;

@end

