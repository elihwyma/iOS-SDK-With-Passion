/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSSet, NSString, NSURL;

@interface PKTransitPartner : NSObject <Swift>

{
    NSString *_identifier;
    NSString *_localizedDisplayName;
    NSURL *_purchaseURL;
    NSSet *_supportedTransitNetworkIdentifiers;
    long long _maxNotificationCount;
}

@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *localizedDisplayName;
@property (copy, nonatomic, readonly) NSURL *purchaseURL;
@property (copy, nonatomic, readonly) NSSet *supportedTransitNetworkIdentifiers;
@property (nonatomic) long long maxNotificationCount;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 localizedDisplayName:(id)arg2;
- (id)initWithIdentifier:(id)arg1 localizedDisplayName:(id)arg2 purchaseURL:(id)arg3 supportedTransitNetworkIdentifiers:(id)arg4;

@end
