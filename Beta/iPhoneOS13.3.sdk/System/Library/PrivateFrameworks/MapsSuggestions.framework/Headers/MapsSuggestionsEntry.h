/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

#import <MapsSuggestions/Swift-Protocol.h>

@class GEOMapItemStorage, NSData, NSDate, NSMutableDictionary, NSMutableSet, NSString;

@interface MapsSuggestionsEntry : NSObject <Swift>

{
    NSMutableSet *_typeHistory;
    NSMutableDictionary *_sourceSpecificInfo;
    _Bool _deleted;
    long long _type;
    NSString *_title;
    NSString *_titleWhenLocked;
    NSString *_subtitle;
    NSString *_subtitleWhenLocked;
    NSData *_iconData;
    NSString *_undecoratedTitle;
    NSString *_undecoratedTitleWhenLocked;
    NSString *_undecoratedSubtitle;
    NSString *_undecoratedSubtitleWhenLocked;
    double _weight;
    NSDate *_expires;
    struct GEOMapItemStorage *_geoMapItem;
    struct NSString *_originatingSourceName;
}

@property (nonatomic, readonly) _Bool isShortcut;
@property (nonatomic, readonly) _Bool isPureShortcut;
@property (nonatomic, readonly) _Bool isShortcutForSetup;
@property (nonatomic, readonly) NSString *shortcutIdentifier;
@property (nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic, readonly) long long type;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *titleWhenLocked;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *subtitleWhenLocked;
@property (retain, nonatomic) NSData *iconData;
@property (retain, nonatomic) NSString *undecoratedTitle;
@property (retain, nonatomic) NSString *undecoratedTitleWhenLocked;
@property (retain, nonatomic) NSString *undecoratedSubtitle;
@property (retain, nonatomic) NSString *undecoratedSubtitleWhenLocked;
@property (nonatomic) double weight;
@property (retain, nonatomic) NSDate *expires;
@property (nonatomic) _Bool deleted;
@property (retain, nonatomic) GEOMapItemStorage *geoMapItem;
@property (retain, nonatomic) NSString *originatingSourceName;
@property (copy, nonatomic, readonly) NSString *description;
@property (copy, nonatomic, readonly) NSString *shortDescription;
@property (copy, nonatomic, readonly) NSString *fullDescription;
@property (nonatomic, readonly) _Bool hasExpired;
@property (copy, nonatomic, readonly) NSString *serializedHexString;
@property (copy, nonatomic, readonly) NSString *serializedBase64String;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;

+ (_Bool)supportsSecureCoding;
+ (int)defaultDirectionsTransportType;
+ (id)entryFromSerializedHexString:(id)arg1 hasPrefix:(_Bool)arg2;
+ (id)entryWithData:(id)arg1;
+ (id)entryFromSerializedBase64String:(id)arg1 hasPrefix:(_Bool)arg2;
+ (id)entryWithType:(long long)arg1 title:(id)arg2 subtitle:(id)arg3 weight:(double)arg4 expires:(id)arg5 sourceSpecificInfo:(id)arg6;
+ (id)entryFromSerializedString:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)containsKey:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)data;
- (id)stringForKey:(id)arg1;
- (struct NSArray *)stringArrayForKey:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (id)URLForKey:(id)arg1;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setURL:(id)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (id)numberForKey:(id)arg1;
- (void)setNumber:(id)arg1 forKey:(id)arg2;
- (id)dateForKey:(id)arg1;
- (void)setDate:(id)arg1 forKey:(id)arg2;
- (id)contacts;
- (id)startTime;
- (id)endTime;
- (_Bool)hasStartTime;
- (_Bool)hasEndTime;
- (unsigned long long)uint64ForKey:(id)arg1;
- (void)setContacts:(id)arg1;
- (_Bool)isEqualToEntry:(id)arg1;
- (id)initWithType:(long long)arg1 title:(id)arg2;
- (_Bool)booleanForKey:(id)arg1;
- (void)setBoolean:(_Bool)arg1 forKey:(id)arg2;
- (void)setETA:(id)arg1 forKey:(id)arg2;
- (id)ETAForKey:(id)arg1;
- (_Bool)hasFullFlightInfoAndGate;
- (id)fullFlightCode;
- (_Bool)booleanForKey:(id)arg1 is:(_Bool)arg2;
- (struct NSData *)mapItemHandleData;
- (_Bool)_wasEverOfType:(long long)arg1;
- (_Bool)_wasEverOneOfTypes:(id)arg1;
- (void)mergeFromSuggestionEntry:(id)arg1 behavior:(unsigned long long)arg2 protectTitles:(_Bool)arg3 protectTitleDecorations:(_Bool)arg4 protectMapItem:(_Bool)arg5 protectWeight:(_Bool)arg6 protectExpiration:(_Bool)arg7 protectIcon:(_Bool)arg8;
- (void)_overrideType:(long long)arg1;
- (void)mergeSpecificsFromSuggestionEntry:(id)arg1 behavior:(unsigned long long)arg2;
- (id)sourceSpecificInfo;
- (void)setSourceSpecificInfo:(id)arg1;
- (void)replaceByEntry:(id)arg1 forceDecoratedOverwrites:(_Bool)arg2;
- (void)replaceByEntry:(id)arg1;
- (_Bool)updateUndecoratedTitle:(id)arg1;
- (_Bool)updateUndecoratedSubtitle:(id)arg1;
- (_Bool)wasEverOfType:(long long)arg1;
- (_Bool)wasEverOneOfTypes:(id)arg1;
- (_Bool)startsBeforeEntry:(id)arg1;
- (_Bool)expiresBeforeEntry:(id)arg1;
- (void)mergeFromSuggestionEntry:(id)arg1 behavior:(unsigned long long)arg2;
- (_Bool)hasStartAndEndTime;
- (id)departingAirportCode;
- (_Bool)hasEssentialFlightInfo;
- (void)setMapItemHandleData:(struct NSData *)arg1;
- (long long)availableRemovalBehaviors;
- (void)setAvailableRemovalBehavior:(long long)arg1;
- (id)initWithType:(long long)arg1 title:(id)arg2 subtitle:(id)arg3 weight:(double)arg4 expires:(id)arg5 geoMapItem:(struct GEOMapItemStorage *)arg6 sourceSpecificInfo:(id)arg7;
- (void)_setValue:(id)arg1 forKey:(id)arg2 class:(Class)arg3;
- (id)_valueForKey:(id)arg1 class:(Class)arg2;
- (id)initWithType:(long long)arg1 title:(id)arg2 subtitle:(id)arg3 weight:(double)arg4 expires:(id)arg5 sourceSpecificInfo:(id)arg6;
- (void)setStringArray:(struct NSArray *)arg1 forKey:(id)arg2;
- (void)setUUID:(id)arg1 forKey:(id)arg2;
- (id)UUIDForKey:(id)arg1;
- (void)resetAvailableRemovalBehavior:(long long)arg1;

@end
