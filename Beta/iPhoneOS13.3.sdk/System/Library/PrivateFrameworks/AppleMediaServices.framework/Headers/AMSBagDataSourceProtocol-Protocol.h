/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/Swift-Protocol.h>

@class NSDate, NSString;

@protocol AMSBagDataSourceProtocol <Swift>

@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly, getter=isLoaded) _Bool loaded;
@property (copy, nonatomic, readonly) NSString *profile;
@property (copy, nonatomic, readonly) NSString *profileVersion;
@property (copy, nonatomic) CDUnknownBlockType dataSourceChangedHandler;
@property (copy, nonatomic) CDUnknownBlockType dataSourceDataInvalidatedHandler;

- (unsigned short)bagKeyInfoForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)valueForURLVariable:account: /* Error: Ran out of types for this method. */;
- (unsigned short)loadWithCompletion: /* Error: Ran out of types for this method. */;

@end
