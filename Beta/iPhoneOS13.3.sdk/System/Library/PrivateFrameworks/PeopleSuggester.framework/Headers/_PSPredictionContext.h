/*
 Image: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
 */

#import <NSObject.h>

@class NSArray, NSDate, NSDictionary, NSString, NSUUID;

@interface _PSPredictionContext : NSObject

{
    NSDate *_suggestionDate;
    NSUUID *_locationUUID;
    NSArray *_locationUUIDs;
    long long _locationType;
    NSString *_bundleID;
    NSString *_accountIdentifier;
    NSArray *_seedRecipients;
    NSArray *_candidateShareExtensionBundleIds;
    NSDictionary *_appBundleIdsToShareExtensionBundleIdsMapping;
    NSArray *_attachments;
    NSArray *_photoSuggestedPeople;
}

@property (copy, nonatomic) NSDate *suggestionDate;
@property (copy, nonatomic) NSUUID *locationUUID;
@property (copy, nonatomic) NSArray *locationUUIDs;
@property (nonatomic) long long locationType;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSArray *seedRecipients;
@property (copy, nonatomic) NSArray *candidateShareExtensionBundleIds;
@property (copy, nonatomic) NSDictionary *appBundleIdsToShareExtensionBundleIdsMapping;
@property (retain, nonatomic) NSArray *attachments;
@property (copy, nonatomic) NSArray *photoSuggestedPeople;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
