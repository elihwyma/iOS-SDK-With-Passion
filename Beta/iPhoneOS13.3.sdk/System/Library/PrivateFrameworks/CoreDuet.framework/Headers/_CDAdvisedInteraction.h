/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSSet, NSString, _CDContact;

@interface _CDAdvisedInteraction : NSObject

{
    NSMutableSet *_reasons;
    _CDContact *_contact;
    NSString *_account;
    NSString *_bundleId;
    long long _mechanism;
    double _score;
    long long _similarOutgoingInteractionsCount;
    long long _similarIncomingInteractionsCount;
    long long _similarBidirectionalInteractionsCount;
}

@property (retain) _CDContact *contact;
@property (retain) NSString *account;
@property (retain) NSString *bundleId;
@property long long mechanism;
@property double score;
@property (retain) NSSet *reasons;
@property long long similarOutgoingInteractionsCount;
@property long long similarIncomingInteractionsCount;
@property long long similarBidirectionalInteractionsCount;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)descriptionOfReasons:(id)arg1;
- (void)addReasons:(id)arg1;
- (void)addReason:(long long)arg1;

@end
