/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, _DKObjectType;

@interface _CDEventStreamProperties : NSObject

{
    _Bool isAvailable;
    _Bool dataCollectionEnabled;
    _Bool setupOnDemand;
    _Bool isInstant;
    _Bool isHistorical;
    _Bool shouldSaveCurrentEventOnShutdown;
    NSString *name;
    NSString *formattedName;
    NSString *knowledgeBaseName;
    NSString *knowledgeBaseMetadataClass;
    NSString *descriptionString;
    unsigned long long domainAvailability;
    NSString *monitorClass;
    NSURL *contentProviderBundleURL;
    _DKObjectType *valueType;
    double timeToLive;
    double temporalPrecision;
    long long eventCountLimit;
    double period;
    long long eventsPerPeriod;
    long long pollingPeriod;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *formattedName;
@property (nonatomic, readonly) NSString *knowledgeBaseName;
@property (nonatomic, readonly) NSString *knowledgeBaseMetadataClass;
@property (nonatomic, readonly) NSString *descriptionString;
@property (nonatomic, readonly) _Bool isAvailable;
@property (nonatomic, readonly) unsigned long long domainAvailability;
@property (nonatomic, readonly) _DKObjectType *valueType;
@property (nonatomic, readonly) _Bool dataCollectionEnabled;
@property (nonatomic, readonly) double timeToLive;
@property (nonatomic, readonly) double temporalPrecision;
@property (nonatomic, readonly) long long eventCountLimit;
@property (nonatomic, readonly) double period;
@property (nonatomic, readonly) long long eventsPerPeriod;
@property (nonatomic, readonly) NSString *monitorClass;
@property (nonatomic, readonly) NSURL *contentProviderBundleURL;
@property (nonatomic, readonly) _Bool isInstant;
@property (nonatomic, readonly) _Bool isHistorical;
@property (nonatomic, readonly) _Bool shouldSaveCurrentEventOnShutdown;
@property (nonatomic, readonly) _Bool setupOnDemand;
@property (nonatomic, readonly) long long pollingPeriod;

+ (id)eventStreamPropertiesFromDictionary:(id)arg1;
+ (id)eventStreamPropertiesFromDictionary:(id)arg1 defaultProperties:(id)arg2;

- (id)description;
- (id)initFromDictionary:(id)arg1 defaultProperties:(id)arg2;

@end
