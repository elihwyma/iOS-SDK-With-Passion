/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

#import <NSObject.h>

@class NSArray, PPContact;

@interface PPScoredContact : NSObject

{
    unsigned char _flags;
    PPContact *_contact;
    double _score;
    NSArray *_scoredPhoneNumbers;
    NSArray *_scoredEmailAddresses;
    NSArray *_scoredSocialProfiles;
    NSArray *_scoredPostalAddresses;
}

@property (nonatomic, readonly) PPContact *contact;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) unsigned char flags;
@property (nonatomic, readonly) NSArray *scoredPhoneNumbers;
@property (nonatomic, readonly) NSArray *scoredEmailAddresses;
@property (nonatomic, readonly) NSArray *scoredSocialProfiles;
@property (nonatomic, readonly) NSArray *scoredPostalAddresses;

+ (_Bool)supportsSecureCoding;
+ (id)scoredContactWithContact:(id)arg1 scoredPhoneNumbers:(id)arg2 scoredEmailAddresses:(id)arg3 scoredSocialProfiles:(id)arg4 scoredPostalAddresses:(id)arg5 score:(double)arg6 flags:(unsigned char)arg7;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)reverseCompare:(id)arg1;
- (id)initWithContact:(id)arg1 scoredPhoneNumbers:(id)arg2 scoredEmailAddresses:(id)arg3 scoredSocialProfiles:(id)arg4 scoredPostalAddresses:(id)arg5 score:(double)arg6 flags:(unsigned char)arg7;
- (_Bool)isEqualToScoredContact:(id)arg1;

@end
