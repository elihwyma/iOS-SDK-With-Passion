/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray, NSString, PKDiscoveryCallToAction, PKDiscoveryCard;

@interface PKDiscoveryArticleLayout : NSObject <Swift>

{
    _Bool _requestedBadge;
    NSString *_itemIdentifier;
    long long _version;
    long long _variant;
    PKDiscoveryCard *_card;
    NSArray *_shelves;
    PKDiscoveryCallToAction *_footerLockup;
    long long _priority;
    CDUnknownBlockType _actionOnDismiss;
}

@property (retain, nonatomic) NSString *itemIdentifier;
@property (nonatomic) long long priority;
@property (nonatomic, readonly) long long version;
@property (nonatomic, readonly) long long variant;
@property (nonatomic, readonly) PKDiscoveryCard *card;
@property (nonatomic, readonly) NSArray *shelves;
@property (nonatomic, readonly) PKDiscoveryCallToAction *footerLockup;
@property (copy, nonatomic) CDUnknownBlockType actionOnDismiss;
@property (nonatomic, readonly, getter=hasRequestedBadge) _Bool requestedBadge;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)localizeWithBundle:(id)arg1;
- (void)localizeWithBundle:(id)arg1 table:(id)arg2;
- (_Bool)isEqualForUI:(id)arg1;
- (void)setForItem:(id)arg1;

@end
