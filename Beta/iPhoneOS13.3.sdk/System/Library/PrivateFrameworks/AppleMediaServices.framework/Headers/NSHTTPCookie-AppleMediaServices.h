/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <CFNetwork/NSHTTPCookie.h>

@class NSString;

@interface NSHTTPCookie (AppleMediaServices)

@property (nonatomic, readonly, getter=ams_isCookieValidForBag) _Bool ams_cookieValidForBag;
@property (nonatomic, readonly, getter=ams_isDeleted) _Bool ams_deleted;
@property (nonatomic, readonly, getter=ams_isExpired) _Bool ams_expired;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *hashedDescription;

+ (id)ams_cookieByMarkingCookieAsDeleted:(id)arg1;

- (_Bool)ams_isEquivalent:(id)arg1;

@end
