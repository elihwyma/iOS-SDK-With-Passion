/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <CoreMotion/Swift-Protocol.h>

@protocol CLCompassDatabaseProtocol <Swift>

- (unsigned short)dumpDatabase:onCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)getBiasWithMagneticField:acceleration: /* Error: Ran out of types for this method. */;
- (unsigned short)setBias:withMagneticField:level:magnitude:inclination: /* Error: Ran out of types for this method. */;
- (unsigned short)doAsync: /* Error: Ran out of types for this method. */;
- (unsigned short)doAsync:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)syncgetDoSync: /* Error: Ran out of types for this method. */;
- (unsigned short)syncgetPendingSetBiasCount;
- (unsigned short)syncgetLookupBiasWithMagneticField:acceleration:bias:level:noResults: /* Error: Ran out of types for this method. */;

@end
