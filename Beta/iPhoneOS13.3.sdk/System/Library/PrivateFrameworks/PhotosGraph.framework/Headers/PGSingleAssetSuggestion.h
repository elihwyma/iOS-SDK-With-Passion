/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSSet, NSString, PHAsset;

@interface PGSingleAssetSuggestion : NSObject

{
    PHAsset *_asset;
    _Bool _isInvalid;
    unsigned short _type;
    unsigned short _subtype;
    NSSet *_features;
    id _recipe;
    unsigned long long _relevanceDurationInDays;
    NSString *_title;
    NSString *_subtitle;
    NSArray *_reasons;
}

@property (retain, nonatomic) id recipe;
@property (nonatomic) unsigned long long relevanceDurationInDays;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) _Bool isInvalid;
@property (copy, nonatomic) NSArray *reasons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned short type;
@property (nonatomic, readonly) unsigned short subtype;
@property (nonatomic, readonly) unsigned short state;
@property (nonatomic, readonly) unsigned short notificationState;
@property (nonatomic, readonly) long long version;
@property (nonatomic, readonly) NSArray *keyAssets;
@property (nonatomic, readonly) NSArray *representativeAssets;
@property (nonatomic, readonly) NSSet *features;
@property (copy, nonatomic, readonly) NSArray *suggestedPersonLocalIdentifiers;
@property (nonatomic, readonly) _Bool containsUnverifiedPersons;
@property (nonatomic, readonly) NSDate *universalStartDate;
@property (nonatomic, readonly) NSDate *universalEndDate;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) unsigned char notificationQuality;

- (id)initWithType:(unsigned short)arg1 subtype:(unsigned short)arg2 asset:(id)arg3;

@end
