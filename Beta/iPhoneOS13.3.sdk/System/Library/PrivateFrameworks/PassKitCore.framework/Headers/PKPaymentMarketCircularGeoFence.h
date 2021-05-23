/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class CLCircularRegion, NSString, NSUUID;

@interface PKPaymentMarketCircularGeoFence : NSObject <Swift>

{
    CLCircularRegion *_circle;
    NSUUID *_identifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (double)distanceFromLocation:(id)arg1;
- (_Bool)containsLocation:(id)arg1;

@end
