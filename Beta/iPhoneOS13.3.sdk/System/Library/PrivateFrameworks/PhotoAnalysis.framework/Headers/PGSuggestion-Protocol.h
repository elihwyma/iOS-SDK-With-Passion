/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <PhotoAnalysis/Swift-Protocol.h>

@class NSArray, NSDate, NSSet, NSString;

@protocol PGSuggestion <Swift>

@property (nonatomic, readonly) unsigned short type;
@property (nonatomic, readonly) unsigned short subtype;
@property (nonatomic, readonly) unsigned short state;
@property (nonatomic, readonly) unsigned short notificationState;
@property (nonatomic, readonly) long long version;
@property (nonatomic, readonly) NSArray *keyAssets;
@property (nonatomic, readonly) NSArray *representativeAssets;
@property (nonatomic, readonly) NSSet *features;
@property (nonatomic, readonly) id recipe;
@property (copy, nonatomic, readonly) NSArray *suggestedPersonLocalIdentifiers;
@property (nonatomic, readonly) _Bool containsUnverifiedPersons;
@property (nonatomic, readonly) NSDate *universalStartDate;
@property (nonatomic, readonly) NSDate *universalEndDate;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) unsigned long long relevanceDurationInDays;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) unsigned char notificationQuality;
@property (nonatomic, readonly) _Bool isInvalid;
@property (copy, nonatomic, readonly) NSArray *reasons;

@end
