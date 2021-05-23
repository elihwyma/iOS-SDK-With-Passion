/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFStatusItem.h>

@interface HFAbstractBinaryStatusItem : HFStatusItem

- (id)serviceTypes;
- (id)oneAbnormalServiceFormatString;
- (id)oneAbnormalServiceWithRoomFormatString;
- (id)multipleAbnormalServicesWithRoomFormatString;
- (id)multipleAbnormalServicesFormatString;
- (id)_subclass_updateWithOptions:(id)arg1;

@end
