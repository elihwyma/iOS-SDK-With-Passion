/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntent.h>

@class CLPlacemark, INDateComponentsRange, NSArray, NSString;

@interface INSearchForPhotosIntent : INIntent

@property (copy, nonatomic, readonly) INDateComponentsRange *dateCreated;
@property (copy, nonatomic, readonly) CLPlacemark *locationCreated;
@property (copy, nonatomic, readonly) NSString *albumName;
@property (copy, nonatomic, readonly) NSArray *searchTerms;
@property (nonatomic, readonly) long long searchTermsOperator;
@property (nonatomic, readonly) unsigned long long includedAttributes;
@property (nonatomic, readonly) unsigned long long excludedAttributes;
@property (copy, nonatomic, readonly) NSArray *peopleInPhoto;
@property (nonatomic, readonly) long long peopleInPhotoOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *events;
@property (nonatomic, readonly) long long eventsOperator;
@property (copy, nonatomic) NSArray *places;
@property (nonatomic, readonly) long long placesOperator;
@property (copy, nonatomic) NSArray *activities;
@property (nonatomic, readonly) long long activitiesOperator;
@property (copy, nonatomic) NSArray *geographicalFeatures;
@property (nonatomic, readonly) long long geographicalFeaturesOperator;
@property (copy, nonatomic) NSString *memoryName;

- (id)domain;
- (id)_metadata;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)_dictionaryRepresentation;
- (void)_setMetadata:(id)arg1;
- (void)setDateCreated:(id)arg1;
- (void)setAlbumName:(id)arg1;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)setVerb:(id)arg1;
- (id)parametersByName;
- (void)setParametersByName:(id)arg1;
- (void)setLocationCreated:(id)arg1;
- (void)setSearchTerms:(id)arg1;
- (void)setIncludedAttributes:(unsigned long long)arg1;
- (void)setExcludedAttributes:(unsigned long long)arg1;
- (void)setPeopleInPhoto:(id)arg1;
- (id)initWithDateCreated:(id)arg1 locationCreated:(id)arg2 albumName:(id)arg3 searchTerms:(id)arg4 includedAttributes:(unsigned long long)arg5 excludedAttributes:(unsigned long long)arg6 peopleInPhoto:(id)arg7;

@end
