/*
 Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

#import <Search/SFSearchResult_Compatibility.h>

@class MISSING_TYPE, NSArray, NSDate, NSString;

@interface SPCoreSpotlightResult : SFSearchResult_Compatibility

{
    _Bool _completed;
    _Bool _hasAssociatedUserActivity;
    NSString *_relatedUniqueIdentifier;
    NSString *_itemIdentifier;
    NSDate *_interestingDate;
    NSString *_domainIdentifier;
    long long *_incomingCount;
    long long *_outgoingCount;
    NSString *_relatedBundleID;
    NSString *_mailConversationIdentifier;
    NSString *_stringForDedupe;
    NSArray *_launchDates;
    NSDate *_contentCreationDate;
    NSString *_bundleID;
    MISSING_TYPE *_buddyScore;
}

@property (retain) NSString *relatedUniqueIdentifier;
@property MISSING_TYPE *buddyScore;
@property (retain) NSString *itemIdentifier;
@property (retain) NSDate *interestingDate;
@property _Bool completed;
@property (retain) NSString *domainIdentifier;
@property long long *incomingCount;
@property long long *outgoingCount;
@property (retain) NSArray *compatibilityDescriptions;
@property (retain) NSString *relatedBundleID;
@property (retain) NSString *mailConversationIdentifier;
@property (retain) NSString *stringForDedupe;
@property (nonatomic) _Bool hasAssociatedUserActivity;
@property (retain, nonatomic) NSArray *launchDates;
@property (retain, nonatomic) NSDate *contentCreationDate;
@property (retain, nonatomic) NSString *bundleID;
@property int title_maxlines;

- (id)init;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (Class)classForCoder;
- (_Bool)hasDetail;

@end
