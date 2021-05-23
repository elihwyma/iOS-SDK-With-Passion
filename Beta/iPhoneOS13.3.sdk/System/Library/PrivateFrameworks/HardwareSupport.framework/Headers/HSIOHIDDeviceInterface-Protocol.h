/*
 Image: /System/Library/PrivateFrameworks/HardwareSupport.framework/HardwareSupport
 */

#import <HardwareSupport/Swift-Protocol.h>

@protocol HSIOHIDDeviceInterface <Swift>

- (unsigned short)valueForProperty: /* Error: Ran out of types for this method. */;
- (unsigned short)setValue:forProperty: /* Error: Ran out of types for this method. */;
- (unsigned short)open: /* Error: Ran out of types for this method. */;
- (unsigned short)close: /* Error: Ran out of types for this method. */;
- (unsigned short)setOutputReportWithID:data:error: /* Error: Ran out of types for this method. */;
- (unsigned short)setFeatureReportWithID:data:error: /* Error: Ran out of types for this method. */;
- (unsigned short)featureReportWithID:error: /* Error: Ran out of types for this method. */;
- (unsigned short)scheduleWithRunLoop:mode: /* Error: Ran out of types for this method. */;
- (unsigned short)unscheduleFromRunLoop:mode: /* Error: Ran out of types for this method. */;
- (unsigned short)setDeviceRemovedCallback: /* Error: Ran out of types for this method. */;
- (unsigned short)setInputReportCallback: /* Error: Ran out of types for this method. */;

@end
