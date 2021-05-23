/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

#import <IDSFoundation/Swift-Protocol.h>

@class NSString;

@interface IDSDestination : NSObject <Swift>

@property (nonatomic, readonly, getter=isEmpty) _Bool empty;
@property (nonatomic, readonly, getter=isGuest) _Bool guest;
@property (nonatomic, readonly, getter=isDevice) _Bool device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)destinationWithStrings:(id)arg1;
+ (id)destinationWithDestinations:(id)arg1;
+ (id)destinationWithDeviceURI:(id)arg1;
+ (id)destinationWithRapportPublicIdentifierURI:(id)arg1;
+ (id)destinationWithAlias:(id)arg1 pushToken:(id)arg2;
+ (id)destinationWithString:(id)arg1;
+ (id)destinationWithGroup:(id)arg1;
+ (id)defaultPairedDeviceDestination;
+ (id)sentinelSelfAliasDestination;
+ (id)destinationWithURI:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)groupID;
- (id)destinationURIs;
- (id)normalizedURIs;
- (id)normalizedURIStrings;
- (_Bool)isEqualToDestination:(id)arg1;

@end
