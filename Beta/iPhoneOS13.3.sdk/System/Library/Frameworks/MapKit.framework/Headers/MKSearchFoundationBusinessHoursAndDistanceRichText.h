/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKSearchFoundationRichText.h>

__attribute__((visibility("hidden")))
@interface MKSearchFoundationBusinessHoursAndDistanceRichText : MKSearchFoundationRichText

{
    _Bool _businessHoursResolved;
    _Bool _distanceResolved;
}

@property (getter=isBusinessHoursResolved) _Bool businessHoursResolved;
@property (getter=isDistanceResolved) _Bool distanceResolved;

- (_Bool)isRichTextResolved;
- (void)resolveBusinessHoursByMapItem:(id)arg1 lines:(id)arg2;
- (void)resolveDistanceString:(id)arg1 lines:(id)arg2;
- (void)resolveDistanceNotFound;

@end
