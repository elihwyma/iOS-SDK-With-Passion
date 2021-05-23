/*
 Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface PFMediaCapabilitiesQuery : NSObject

{
    NSMutableDictionary *_capabilitiesInformation;
}

@property (retain) NSMutableDictionary *capabilitiesInformation;

- (id)init;
- (id)initWithOptions:(id)arg1;
- (id)dictionaryRepresentation;
- (void)gatherCapabilitiesWithOptions:(id)arg1;
- (void)addVersion;
- (void)addCodecInformation;
- (void)addHEVCCodecInformationToDictionary:(id)arg1;
- (void)addHEIFContainerInformationToDictionary:(id)arg1;
- (void)addVendorSpecificInformation;
- (void)addTranscodeChoiceWithOptions:(id)arg1;
- (void)addLivePhotoInformationToDictionary:(id)arg1;
- (void)addAssetBundleInformationToDictionary:(id)arg1;

@end
