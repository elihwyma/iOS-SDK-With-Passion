//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableSet, NSSet, NSString, _CDContact;

@interface _CDAdvisedInteraction : NSObject <NSCopying, NSSecureCoding>
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

+ (BOOL)supportsSecureCoding;
@property long long similarBidirectionalInteractionsCount; // @synthesize similarBidirectionalInteractionsCount=_similarBidirectionalInteractionsCount;
@property long long similarIncomingInteractionsCount; // @synthesize similarIncomingInteractionsCount=_similarIncomingInteractionsCount;
@property long long similarOutgoingInteractionsCount; // @synthesize similarOutgoingInteractionsCount=_similarOutgoingInteractionsCount;
@property double score; // @synthesize score=_score;
@property long long mechanism; // @synthesize mechanism=_mechanism;
@property(retain) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(retain) NSString *account; // @synthesize account=_account;
@property(retain) _CDContact *contact; // @synthesize contact=_contact;
// - (void).cxx_destruct;
- (void)addReasons:(id)arg1;
- (void)addReason:(long long)arg1;
@property(retain) NSSet *reasons;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (id)descriptionOfReasons:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

