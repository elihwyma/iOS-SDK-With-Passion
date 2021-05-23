/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSString, RadioStation;

@interface SKUIRadioStationEntityValueProvider : NSObject

{
    RadioStation *_station;
}

@property (nonatomic, readonly) RadioStation *station;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithStation:(id)arg1;
- (id)entityUniqueIdentifier;
- (id)valueForEntityProperty:(id)arg1;
- (id)valuesForEntityProperties:(id)arg1;
- (id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(struct CGSize)arg2 destinationScale:(double)arg3;
- (id)rsep_stationName;
- (id)rsep_coreSeedName;
- (id)rsep_stationDescription;

@end
