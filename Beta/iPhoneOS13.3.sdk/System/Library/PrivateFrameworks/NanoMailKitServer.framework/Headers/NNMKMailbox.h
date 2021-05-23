/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, NSURL;

@interface NNMKMailbox : NSObject

{
    _Bool _syncEnabled;
    _Bool _syncRequested;
    _Bool _syncActive;
    _Bool _hasSelection;
    _Bool _databaseContentVerified;
    unsigned long long _type;
    unsigned long long _filterType;
    NSString *_mailboxId;
    NSString *_accountId;
    NSString *_accountLocalId;
    NSURL *_url;
    NSString *_customName;
    NSDate *_lastUpdate;
}

@property (nonatomic) _Bool databaseContentVerified;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long filterType;
@property (retain, nonatomic) NSString *mailboxId;
@property (retain, nonatomic) NSString *accountId;
@property (retain, nonatomic) NSString *accountLocalId;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *customName;
@property (nonatomic) _Bool syncEnabled;
@property (nonatomic) _Bool syncRequested;
@property (nonatomic) _Bool syncActive;
@property (retain, nonatomic) NSDate *lastUpdate;
@property (nonatomic, getter=isSelected) _Bool selected;
@property (nonatomic) _Bool hasSelection;

+ (_Bool)supportsSecureCoding;
+ (unsigned long long)syncedTypeFromFilterType:(unsigned long long)arg1;
+ (id)idsFromMailboxes:(id)arg1;
+ (unsigned long long)messageStateForMailboxFilterType:(unsigned long long)arg1;
+ (id)generateMailboxIdWithAccountId:(id)arg1 mailboxName:(id)arg2;
+ (unsigned long long)syncedTypeFromMailbox:(id)arg1;
+ (unsigned long long)defaultFilterTypes;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)resetURL;
- (_Bool)hasFilterType:(unsigned long long)arg1;
- (_Bool)hasCompoundFilters;
- (id)initWithFilterType:(unsigned long long)arg1;
- (_Bool)isSelectedForFilterType:(unsigned long long)arg1;
- (_Bool)hasAnyFilter;
- (void)addFilterType:(unsigned long long)arg1;
- (void)removeFilterType:(unsigned long long)arg1;

@end
