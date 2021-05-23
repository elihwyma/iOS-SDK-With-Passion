/*
 Image: /System/Library/PrivateFrameworks/Cards.framework/Cards
 */

#import <Cards/Swift-Protocol.h>

@class NSArray, NSSet, NSString, SFCard;

@protocol CRCard <Swift>

@property (nonatomic, readonly) NSArray *cardSections;
@property (nonatomic, readonly) NSSet *interactions;
@property (nonatomic, readonly) NSArray *dismissalCommands;
@property (copy, nonatomic, readonly) NSString *cardIdentifier;
@property (nonatomic, readonly) unsigned long long cardFormat;
@property (nonatomic, readonly) _Bool asynchronous;
@property (nonatomic, readonly) _Bool flexibleSectionOrder;
@property (nonatomic, readonly) SFCard *backingCard;

@end
