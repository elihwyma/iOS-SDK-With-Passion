/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol NTKCGalleryCollectionDelegate;

@interface NTKCGalleryCollection : NSObject

{
    NSString *_title;
    CDUnknownBlockType _calloutName;
    NSString *_descriptionText;
    id <NTKCGalleryCollectionDelegate> _delegate;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) CDUnknownBlockType calloutName;
@property (weak, nonatomic) id <NTKCGalleryCollectionDelegate> delegate;
@property (nonatomic, readonly) _Bool canAddNewFaces;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_explorerFacesForDevice:(id)arg1;
+ (id)_modularFacesForDevice:(id)arg1;
+ (id)_utilityFacesForDevice:(id)arg1;
+ (id)_activityFacesForDevice:(id)arg1;
+ (id)_simpleFacesForDevice:(id)arg1;
+ (id)_motionFacesForDevice:(id)arg1;
+ (id)_colorFacesForDevice:(id)arg1;
+ (id)_chronographFacesForDevice:(id)arg1;
+ (id)_numeralsFacesForDevice:(id)arg1;
+ (id)_astronomyFacesForDevice:(id)arg1;
+ (id)_timelapseFacesForDevice:(id)arg1;
+ (id)_solarFacesForDevice:(id)arg1;
+ (id)_extraLargeFacesForDevice:(id)arg1;
+ (id)_upNextFacesForDevice:(id)arg1;
+ (id)_kaleidoscopeFacesForDevice:(id)arg1;
+ (id)_whistlerAnalogFacesForDevice:(id)arg1;
+ (id)_whistlerDigitalFacesForDevice:(id)arg1;
+ (id)_breatheFacesForDevice:(id)arg1;
+ (id)_smokeFacesForDevice:(id)arg1;
+ (id)_metallicFacesForDevice:(id)arg1;
+ (id)_fireWaterFacesForDevice:(id)arg1;
+ (id)_spectrumAnalogFacesForDevice:(id)arg1;
+ (id)_whistlerSubdialsFacesForDevice:(id)arg1;
+ (id)_californiaFacesForDevice:(id)arg1;
+ (id)_blackcombFacesForDevice:(id)arg1;
+ (id)_bigNumeralsAnalogFacesForDevice:(id)arg1;
+ (id)_bigNumeralsDigitalFacesForDevice:(id)arg1;
+ (id)_photoFacesForDevice:(id)arg1;
+ (id)_mickeyAndMinnieFacesForDevice:(id)arg1;
+ (id)_infinityFacesForDevice:(id)arg1;
+ (id)_prideFacesForDevice:(id)arg1;
+ (id)_victoryDigitalFacesForDevice:(id)arg1;
+ (id)_victoryAnalogFacesForDevice:(id)arg1;
+ (id)_olympusFacesForDevice:(id)arg1;
+ (id)_zeusFacesForDevice:(id)arg1;
+ (id)_whitetankFacesForDevice:(id)arg1;
+ (id)_newFacesExcludingRestrictedForDevice:(id)arg1;
+ (id)_newFacesForDevice:(id)arg1;
+ (id)_calloutNameForNewFaces:(id)arg1 withDevice:(id)arg2;
+ (id)_galleryCollectionForDevice:(id)arg1 withCollectionIdentifier:(id)arg2 title:(id)arg3 calloutName:(CDUnknownBlockType)arg4;
+ (id)galleryCollectionsForDevice:(id)arg1;

- (id)faceAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfFaces;
- (void)enumerateFaceNamesUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)indexOfFace:(id)arg1;
- (id)newFace;

@end
