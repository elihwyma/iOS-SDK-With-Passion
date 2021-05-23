/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSSet, NSString;

@interface PGEnrichableEventSuggestion : NSObject

{
    _Bool _containsUnverifiedPersons;
    unsigned char _notificationQuality;
    unsigned short _type;
    unsigned short _subtype;
    unsigned short _notificationState;
    NSSet *_features;
    NSArray *_suggestedPersonLocalIdentifiers;
    NSArray *_keyAssets;
    NSArray *_representativeAssets;
    NSDate *_universalStartDate;
    NSDate *_universalEndDate;
    NSString *_title;
    NSString *_subtitle;
}

@property (nonatomic) unsigned char notificationQuality;
@property (nonatomic) unsigned short notificationState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned short type;
@property (nonatomic, readonly) unsigned short subtype;
@property (nonatomic, readonly) unsigned short state;
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
@property (nonatomic, readonly) _Bool isInvalid;
@property (copy, nonatomic, readonly) NSArray *reasons;

- (id)_whitelistedMeaningLabels;
- (id)initWithType:(unsigned short)arg1 subtype:(unsigned short)arg2 enrichableEvent:(id)arg3 sharingSuggestionResults:(id)arg4 manager:(id)arg5 loggingConnection:(id)arg6;

@end
