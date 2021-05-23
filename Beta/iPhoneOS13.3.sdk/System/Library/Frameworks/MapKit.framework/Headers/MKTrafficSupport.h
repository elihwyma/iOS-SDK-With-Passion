/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@interface MKTrafficSupport : NSObject

+ (id)sharedTrafficSupport;

- (void)setupTrafficIncidents;
- (id)localizedTitleForGEOIncidentType:(int)arg1 laneType:(int)arg2 laneCount:(unsigned long long)arg3;
- (id)localizedTitleForIncidentType:(long long)arg1 laneType:(long long)arg2 laneCount:(unsigned long long)arg3;
- (id)localizedSubtitleForStreet:(id)arg1 crossStreet:(id)arg2;
- (long long)_convertType:(int)arg1;

@end
