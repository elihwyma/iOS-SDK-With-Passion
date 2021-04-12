//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary, NSMutableDictionary, NSNumber, NSSet, NSString;

@interface FKPerson : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_primaryDestination;
    NSString *_initials;
    NSNumber *_phoneNumberCount;
    NSNumber *_emailAddressCount;
    int _abRecordID;
    NSString *_abRecordGUID;
    NSString *_abDatabaseUID;
    NSString *_name;
    NSSet *_allValues;
    NSMutableDictionary *_metadata;
    BOOL _hasUnreadMessages;
    BOOL _needsSave;
    NSString *_preferredReplyAs;
}

+ (int)addValue:(void )arg1 withLabel:(struct __CFString )arg2 toPerson:(void )arg3 property:(int)arg4;
+ (id)_allEmailValuesInSet:(id)arg1;
+ (id)_allEmailValuesForRecord:(void )arg1;
+ (id)_allPhoneValuesInSet:(id)arg1;
+ (id)_allPhoneValuesForRecord:(void )arg1;
+ (id)allValuesForPerson:(void )arg1;
+ (id)preferredNameForPerson:(void )arg1;
+ (BOOL)supportsSecureCoding;
+ (id)sharedMetadataQueue;
@property(nonatomic) BOOL needsSave; // @synthesize needsSave=_needsSave;
@property(retain, nonatomic) NSString *preferredReplyAs; // @synthesize preferredReplyAs=_preferredReplyAs;
@property(readonly, nonatomic) BOOL hasUnreadMessages; // @synthesize hasUnreadMessages=_hasUnreadMessages;
// - (void).cxx_destruct;
- (void )_bestRecordMatchFromDictionary:(id)arg1 addressBook:(void )arg2;
- (float)_allValuesMatchScore:(id)arg1;
- (id)_recordMatchDictionaryFromCFArray:(struct __CFArray )arg1 followLinks:(BOOL)arg2 addressBook:(void )arg3;
- (void)_reconcile:(void )arg1 canPostChangeNotification:(BOOL)arg2 shouldLogUpdates:(BOOL)arg3;
- (void)_postChangeNotification;
- (BOOL)isLikePerson:(id)arg1;
- (BOOL)isEqualToDictionaryRepresentation:(id)arg1;
- (BOOL)hasName;
- (id)initials;
- (id)abDatabaseUID;
- (void)_setABRecordGUID:(id)arg1;
- (id)abRecordGUID;
- (void )copyABPersonWithAddressBook:(void )arg1;
- (id)description;
@property(readonly, copy, nonatomic) NSDictionary *metadata;
- (void)removeAllMetadataValues;
- (void)addMetadataEntriesFromDictionary:(id)arg1;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;
- (id)metadataValueForKey:(id)arg1;
- (id)_metadataDictionary;
- (NSUInteger)allValuesCount;
- (id)allValues;
- (id)primaryDestination;
- (id)displayName;
- (id)dictionaryRepresentation;
- (void)refreshWithAddressBook:(void )arg1;
- (BOOL)updateFromDictionaryRepresentation:(id)arg1;
- (BOOL)_updateFromDictionaryRepresentation:(id)arg1 shouldLogUpdates:(BOOL)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithFavorite:(id)arg1 addressBook:(void )arg2;
- (id)initWithABRecordGUID:(id)arg1 addressBook:(void )arg2;
- (id)initWithDestinations:(id)arg1 addressBook:(void )arg2;
- (id)initWithDictionaryRepresentation:(id)arg1 addressBook:(void )arg2;
- (id)init;

@end

