/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <Foundation/NSObject.h>

@interface NRDataFileHistoryHelpers : NSObject

+ (void)parseDiff:(id)arg1 forPropertyChange:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
+ (id)unarchiveDeviceHistory;
+ (_Bool)createMissingDates:(id)arg1;
+ (id)unarchiveSecureProperties;
+ (_Bool)archiveSecureProperties:(id)arg1;
+ (_Bool)archiveDeviceHistory:(id)arg1;
+ (id)findPairedDateForDeviceID:(id)arg1 inHistory:(id)arg2;

@end
