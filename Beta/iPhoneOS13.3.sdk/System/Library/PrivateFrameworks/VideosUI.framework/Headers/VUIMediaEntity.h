/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableDictionary, NSNumber, NSSet, NSString, VUIMediaEntityKind, VUIMediaEntityType, VUIMediaLibrary, _TVContentRating;

@protocol VUIMediaEntityIdentifier, VUIMediaEntityIdentifierInternal;

@interface VUIMediaEntity : NSObject

{
    _Bool _localChanges;
    _Bool _cachesPropertiesOnFirstAccess;
    VUIMediaLibrary *_mediaLibrary;
    NSObject<VUIMediaEntityIdentifierInternal> *_identifierInternal;
    NSMutableDictionary *_firstAccessPropertiesCache;
    VUIMediaEntityKind *_kind;
    NSSet *_requestedProperties;
}

@property (retain, nonatomic) VUIMediaLibrary *mediaLibrary;
@property (copy, nonatomic) NSObject<VUIMediaEntityIdentifierInternal> *identifierInternal;
@property (retain, nonatomic) NSMutableDictionary *firstAccessPropertiesCache;
@property (nonatomic) _Bool cachesPropertiesOnFirstAccess;
@property (nonatomic, readonly) VUIMediaEntityKind *kind;
@property (nonatomic, readonly) NSSet *requestedProperties;
@property (copy, nonatomic, readonly) NSString *sortTitle;
@property (copy, nonatomic, readonly) VUIMediaEntityType *type;
@property (copy, nonatomic, readonly) NSObject<VUIMediaEntityIdentifier> *identifier;
@property (copy, nonatomic, readonly) NSNumber *isLocal;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *genreTitle;
@property (copy, nonatomic, readonly) NSString *contentDescription;
@property (copy, nonatomic, readonly) NSNumber *resolution;
@property (copy, nonatomic, readonly) NSNumber *colorCapability;
@property (copy, nonatomic, readonly) NSNumber *audioCapability;
@property (copy, nonatomic, readonly) NSNumber *HLSResolution;
@property (copy, nonatomic, readonly) NSNumber *HLSColorCapability;
@property (copy, nonatomic, readonly) NSNumber *HLSAudioCapability;
@property (copy, nonatomic, readonly) NSDate *addedDate;
@property (copy, nonatomic, readonly) NSDate *releaseDate;
@property (copy, nonatomic, readonly) NSNumber *releaseYear;
@property (copy, nonatomic, readonly) _TVContentRating *contentRating;
@property (copy, nonatomic, readonly) NSString *coverArtImageIdentifier;
@property (copy, nonatomic, readonly) NSNumber *storeID;
@property (copy, nonatomic, readonly) NSNumber *purchaseHistoryID;
@property (copy, nonatomic) NSNumber *playedState;
@property (copy, nonatomic, readonly) NSString *canonicalID;
@property (copy, nonatomic, readonly) NSObject<VUIMediaEntityIdentifier> *showIdentifier;
@property (copy, nonatomic, readonly) NSString *showTitle;
@property (copy, nonatomic, readonly) NSNumber *seasonNumber;
@property (nonatomic, getter=hasLocalChanges) _Bool localChanges;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)_propertyValueForKey:(id)arg1;
- (id)assetController;
- (void)populateMetadata;
- (_Bool)isFetchedPropertiesEqualToFetchedMediaEntity:(id)arg1;
- (id)_propertyValueWithBlock:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (id)initWithMediaLibrary:(id)arg1 identifier:(id)arg2 requestedProperties:(id)arg3 kind:(id)arg4;
- (id)_valueForPropertyDescriptor:(id)arg1;
- (id)_defaultValueForPropertyDescriptor:(id)arg1;
- (_Bool)_didRequestPropertyWithKey:(id)arg1;

@end
