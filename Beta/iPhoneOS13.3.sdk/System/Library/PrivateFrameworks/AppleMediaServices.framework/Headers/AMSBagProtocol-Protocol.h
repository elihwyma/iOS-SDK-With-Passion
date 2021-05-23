/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/Swift-Protocol.h>

@class NSDate, NSString;

@protocol AMSBagProtocol <Swift>

@property (nonatomic, readonly, getter=isExpired) _Bool expired;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (copy, nonatomic, readonly) NSString *profile;
@property (copy, nonatomic, readonly) NSString *profileVersion;

- (unsigned short)boolForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)stringForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)arrayForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)dictionaryForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)integerForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)doubleForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)URLForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)createSnapshotWithCompletion: /* Error: Ran out of types for this method. */;

@end
