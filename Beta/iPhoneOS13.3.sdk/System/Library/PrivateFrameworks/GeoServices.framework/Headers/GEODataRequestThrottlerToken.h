/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@class NSString;

@interface GEODataRequestThrottlerToken : NSObject <Swift>

{
    double _createdAt;
    CDStruct_d1a7ebee _kind;
    NSString *_bundleId;
}

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)refresh;
- (id)initWithXPCCoder:(id)arg1;
- (void)encodeWithXPCCoder:(id)arg1;
- (id)initWithRequest:(CDStruct_d1a7ebee)arg1 forClient:(id)arg2;
- (_Bool)isValidForRequest:(CDStruct_d1a7ebee)arg1 client:(id)arg2;

@end
