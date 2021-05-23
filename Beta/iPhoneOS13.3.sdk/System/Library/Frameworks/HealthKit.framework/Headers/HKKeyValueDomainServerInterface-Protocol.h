/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/Swift-Protocol.h>

@protocol HKKeyValueDomainServerInterface <Swift>

- (unsigned short)remote_setNumber:forKey:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_setDate:forKey:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_setString:forKey:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_setData:forKey:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_setValuesWithDictionary:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_removeValuesForKeys:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_numberForKey:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_dateForKey:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_stringForKey:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_dataForKey:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_allValuesWithCompletion: /* Error: Ran out of types for this method. */;

@end
