/*
 Image: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSNumber, NSString;

@interface CRRecentContact : NSObject

{
    NSMutableArray *_recentDates;
    long long _contactID;
    NSString *_recentsDomain;
    NSString *_displayName;
    NSString *_kind;
    NSString *_address;
    NSString *_lastSendingAddress;
    NSString *_originalSource;
    NSDictionary *_metadata;
    NSNumber *_weight;
    NSNumber *_decayedWeight;
    NSArray *_members;
    unsigned long long _groupKind;
    long long _recentID;
    NSString *_groupName;
    NSString *_rawAddress;
}

@property (nonatomic) long long contactID;
@property (nonatomic) long long recentID;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *recentsDomain;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *kind;
@property (copy, nonatomic) NSString *address;
@property (copy, nonatomic) NSString *rawAddress;
@property (copy, nonatomic) NSString *lastSendingAddress;
@property (copy, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) NSNumber *weight;
@property (retain, nonatomic) NSNumber *decayedWeight;
@property (copy, nonatomic) NSArray *recentDates;
@property (copy, nonatomic) NSArray *members;
@property (copy, nonatomic) NSString *originalSource;
@property (nonatomic) unsigned long long groupKind;
@property (nonatomic, readonly) unsigned long long countOfRecents;
@property (copy, nonatomic, readonly) NSDate *mostRecentDate;
@property (copy, nonatomic, readonly) NSDate *leastRecentDate;
@property (nonatomic, readonly, getter=isGroup) _Bool group;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasFullTextMatch:(id)arg1;
- (id)initWithContactID:(long long)arg1;
- (struct __CFStringTokenizer *)_wordTokenizerForString:(id)arg1 locale:(id)arg2;
- (void)_enumerateWordsInString:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)lazilyCreateRecentDates;
- (unsigned long long)insertionIndexForDate:(id)arg1 wouldBeUnique:(_Bool *)arg2;
- (void)insertDate:(id)arg1 atIndex:(unsigned long long)arg2 required:(_Bool)arg3;
- (void)enumerateArchivablePropertiesWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 recentDate:(id)arg4 recentsDomain:(id)arg5;
- (id)initWithMembers:(id)arg1 displayName:(id)arg2 recentDate:(id)arg3 recentsDomain:(id)arg4;
- (void)applyWeight:(id)arg1;
- (void)recordRecentEventForDate:(id)arg1 userInitiated:(_Bool)arg2;
- (void)setArchivableRecentID:(id)arg1;
- (id)archivableRecentID;
- (void)setArchivableContactID:(id)arg1;
- (id)archivableContactID;
- (void)setArchivableGroupMembers:(id)arg1;
- (id)archivableGroupMembers;
- (void)setArchivableMetadata:(id)arg1;
- (id)archivableMetadata;
- (void)setArchivableGroupKind:(id)arg1;
- (id)archivableGroupKind;

@end
