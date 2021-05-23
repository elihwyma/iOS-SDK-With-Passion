/*
 Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol CNVCardLineFactory, CNVCardPerson;

@interface CNVCard30CardBuilder : NSObject

{
    _Bool _photoHandled;
    id <CNVCardPerson> _person;
    NSMutableArray *_lines;
    long long _groupCount;
    unsigned long long _countOfLinesBeforePhoto;
    CDUnknownBlockType _retrofitPhoto;
    NSMutableArray *_unknownProperties;
    id <CNVCardLineFactory> _lineFactory;
}

@property (nonatomic, readonly) id <CNVCardPerson> person;
@property (nonatomic, readonly) NSMutableArray *lines;
@property (nonatomic) long long groupCount;
@property (nonatomic) unsigned long long countOfLinesBeforePhoto;
@property (copy, nonatomic, readonly) CDUnknownBlockType retrofitPhoto;
@property (nonatomic) _Bool photoHandled;
@property (nonatomic, readonly) NSMutableArray *unknownProperties;
@property (nonatomic, readonly) id <CNVCardLineFactory> lineFactory;

+ (id)builderWithPerson:(id)arg1;
+ (unsigned long long)estimatedBytesAvailableForPhotoWithOptions:(id)arg1 serializer:(id)arg2;

- (id)initWithPerson:(id)arg1;
- (void)addBeginningOfCard;
- (void)addNameLines;
- (void)addEmailAddresses;
- (void)addPhoneNumbers;
- (void)addPostalAddresses;
- (void)addSocialProfiles;
- (void)addActivityAlerts;
- (void)addNote;
- (void)addURLs;
- (void)addCalendarURIs;
- (void)addBirthday;
- (void)addAlternateBirthday;
- (void)addInstantMessagingInfo;
- (void)addPhotoWithOptions:(id)arg1;
- (void)addOtherDates;
- (void)addRelatedNames;
- (void)addNameOrderMarker;
- (void)addCompanyMarker;
- (void)addCategories;
- (void)addCardDAVUID;
- (void)addUID;
- (void)addPhonemeData;
- (void)addDowntimeWhitelist;
- (void)addPreferredLikenessSource;
- (void)addPreferredApplePersonaIdentifier;
- (void)addUnknownProperties;
- (void)addEndOfCard;
- (void)buildWithSerializer:(id)arg1;
- (void)addLineWithName:(id)arg1 value:(id)arg2;
- (void)addNameComponents;
- (void)addFullName;
- (void)addOrganization;
- (void)addPropertyLinesForValues:(id)arg1 generator:(id)arg2;
- (void)removeUnknownPropertiesWithTag:(id)arg1;
- (void)addLegacyInstantMessagingHandles:(id)arg1 forService:(id)arg2 vCardProperty:(id)arg3;
- (void)addInstantMessagingHandles:(id)arg1;
- (_Bool)addPhotoReferences;
- (void)preparePhotoLineWithOptions:(id)arg1;
- (void)_addAttributesForCropRects:(id)arg1 imageHash:(id)arg2 toLine:(id)arg3;

@end
