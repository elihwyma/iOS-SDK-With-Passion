/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFAbstractBinaryStatusItem.h>

@interface HFLockStatusItem : HFAbstractBinaryStatusItem

- (id)serviceTypes;
- (id)oneAbnormalServiceFormatString;
- (id)oneAbnormalServiceWithRoomFormatString;
- (id)multipleAbnormalServicesWithRoomFormatString;
- (id)multipleAbnormalServicesFormatString;

@end
