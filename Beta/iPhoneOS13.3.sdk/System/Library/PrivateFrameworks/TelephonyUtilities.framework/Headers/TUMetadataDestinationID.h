/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class NSString, TUHandle;

@interface TUMetadataDestinationID : NSObject

{
    NSString *_destinationID;
    NSString *_countryCode;
    struct __CFPhoneNumber *_phoneNumber;
    NSString *_cacheKey;
    TUHandle *_normalizedHandle;
}

@property (copy, nonatomic, readonly) NSString *cacheKey;
@property (nonatomic, readonly) TUHandle *normalizedHandle;
@property (copy, nonatomic, readonly) NSString *destinationID;
@property (copy, nonatomic, readonly) NSString *countryCode;
@property (nonatomic, readonly) struct __CFPhoneNumber *phoneNumber;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCall:(id)arg1;
- (id)initWithDestinationID:(id)arg1 countryCode:(id)arg2;

@end
