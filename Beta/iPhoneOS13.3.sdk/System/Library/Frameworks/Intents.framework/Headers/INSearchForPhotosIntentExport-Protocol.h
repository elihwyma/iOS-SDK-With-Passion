/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class CLPlacemark, INDateComponentsRange, NSArray, NSString;

@protocol INSearchForPhotosIntentExport <Swift>

@property (copy, nonatomic) INDateComponentsRange *dateCreated;
@property (copy, nonatomic) CLPlacemark *locationCreated;
@property (copy, nonatomic) NSString *albumName;
@property (copy, nonatomic) NSArray *searchTerms;
@property (nonatomic) unsigned long long includedAttributes;
@property (nonatomic) unsigned long long excludedAttributes;
@property (copy, nonatomic) NSArray *peopleInPhoto;
@property (copy, nonatomic) NSArray *events;
@property (nonatomic, readonly) long long eventsOperator;
@property (copy, nonatomic) NSArray *places;
@property (nonatomic, readonly) long long placesOperator;
@property (copy, nonatomic) NSArray *activities;
@property (nonatomic, readonly) long long activitiesOperator;
@property (copy, nonatomic) NSArray *geographicalFeatures;
@property (nonatomic, readonly) long long geographicalFeaturesOperator;
@property (copy, nonatomic) NSString *memoryName;

- (unsigned short)init;

@end
