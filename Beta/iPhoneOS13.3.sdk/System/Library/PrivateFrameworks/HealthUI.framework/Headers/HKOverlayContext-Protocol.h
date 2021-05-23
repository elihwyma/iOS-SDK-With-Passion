/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/Swift-Protocol.h>

@protocol HKOverlayContext <Swift>

- (unsigned short)contextItemForLastUpdate;
- (unsigned short)updateContextItemForDateInterval:timeScope:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)sampleTypeForDateRangeUpdates;
- (unsigned short)overlayDisplayTypeForTimeScope: /* Error: Ran out of types for this method. */;

@end
