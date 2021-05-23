/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <CoreData/NSManagedObject.h>

@class CLPlacemark, NSData, NSString;

@interface ICLocation : NSManagedObject

{
    _Bool updatingPlace;
    CLPlacemark *_placemark;
}

@property (nonatomic) _Bool updatingPlace;
@property (nonatomic, readonly) NSString *formattedAddress;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (retain, nonatomic) NSData *placemarkData;
@property (retain, nonatomic) CLPlacemark *placemark;

+ (id)searchStringsForPlacemark:(id)arg1;

- (void)didTurnIntoFault;
- (void)setLocationFromPlacemark:(id)arg1;
- (void)setLocationFromURL:(id)arg1;
- (id)searchStrings;

@end
