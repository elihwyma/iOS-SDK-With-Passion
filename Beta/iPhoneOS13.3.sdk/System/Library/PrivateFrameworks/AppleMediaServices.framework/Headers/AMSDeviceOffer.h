/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

#import <AppleMediaServices/Swift-Protocol.h>

@class NSNumber, NSSet, NSString;

@interface AMSDeviceOffer : NSObject <Swift>

{
    _Bool _downgrading;
    _Bool _subscribed;
    NSNumber *_adamId;
    NSString *_description;
    NSSet *_serialNumbers;
    NSString *_offerIdentifier;
}

@property (copy, nonatomic) NSNumber *adamId;
@property (copy, nonatomic) NSString *description;
@property (nonatomic, getter=isDowngrading) _Bool downgrading;
@property (copy, nonatomic) NSString *offerIdentifier;
@property (nonatomic, readonly) unsigned long long offerType;
@property (nonatomic, readonly) NSSet *serialNumbers;
@property (nonatomic, getter=isSubscribed) _Bool subscribed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *debugDescription;

+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagKeySet;
+ (void)addRequiredBagKeysToAggregator:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithOfferIdentifier:(id)arg1;

@end
