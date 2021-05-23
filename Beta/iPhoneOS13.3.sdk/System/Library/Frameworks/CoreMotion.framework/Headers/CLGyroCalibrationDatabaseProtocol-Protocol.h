/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <CoreMotion/Swift-Protocol.h>

@protocol CLGyroCalibrationDatabaseProtocol <Swift>

- (unsigned short)dumpDatabase:onCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)syncgetWipeDatabase;
- (unsigned short)syncgetNumTemperatures;
- (unsigned short)syncgetSupportsMiniCalibration;
- (unsigned short)syncgetBiasFit: /* Error: Ran out of types for this method. */;
- (unsigned short)doAsync: /* Error: Ran out of types for this method. */;
- (unsigned short)doAsync:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)syncgetDoSync: /* Error: Ran out of types for this method. */;
- (unsigned short)syncgetGyroStatsWithBias:slope:l2Error:isDynamic:deltaBias:deltaSlope:deltaError:isDeltaDynamic: /* Error: Ran out of types for this method. */;
- (unsigned short)syncgetMaxDynamicTemperature;
- (unsigned short)startFactoryGYTT;
- (unsigned short)syncgetNonFactoryRoundCount;
- (unsigned short)syncgetLastMiniCalibration;
- (unsigned short)syncgetInsertWithBias:variance:temperature:timestamp: /* Error: Ran out of types for this method. */;

@end
