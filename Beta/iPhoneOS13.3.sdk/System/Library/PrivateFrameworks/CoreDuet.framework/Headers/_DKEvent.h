/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <CoreDuet/_DKObject.h>

@class NSDate, NSDictionary, NSString, NSTimeZone, _DKEventStream;

@interface _DKEvent : _DKObject

{
    _Bool _shouldSync;
    NSDate *_startDate;
    NSDate *_endDate;
    _DKEventStream *_stream;
    _DKObject *_value;
    NSTimeZone *_timeZone;
    NSDictionary *_metadata;
    double _confidence;
    long long _compatibilityVersion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain) _DKEventStream *stream;
@property (retain) NSDate *startDate;
@property (retain) NSDate *endDate;
@property (retain) NSTimeZone *timeZone;
@property (retain) _DKObject *value;
@property (copy) NSDictionary *metadata;
@property double confidence;
@property _Bool shouldSync;
@property long long compatibilityVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)fromPBCodable:(id)arg1;
+ (id)eventWithStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 value:(id)arg4 metadata:(id)arg5;
+ (id)eventWithStream:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 value:(id)arg5 confidence:(double)arg6 metadata:(id)arg7;
+ (id)eventWithStream:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 identifierStringValue:(id)arg5 metadata:(id)arg6;
+ (id)allowedWebpageURLSchemes;
+ (_Bool)isValidURL:(id)arg1;
+ (id)eventWithSearchableItem:(id)arg1 bundleIdentifier:(id)arg2;
+ (id)eventRepresentingUserActivityWithSearchableItem:(id)arg1 bundleIdentifier:(id)arg2;
+ (id)eventWithRelevantShortcut:(id)arg1 bundleID:(id)arg2;
+ (id)eventWithStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 identifierStringValue:(id)arg4 metadata:(id)arg5;
+ (id)entityName;
+ (id)metadataForInteraction:(id)arg1 storeKeyImage:(_Bool)arg2;
+ (id)eventWithInteraction:(id)arg1 bundleIdentifier:(id)arg2 storeKeyImage:(_Bool)arg3;
+ (id)keyPathForMOKeyPath:(id)arg1;
+ (id)moKeyPathForKeyPath:(id)arg1;
+ (id)objectFromManagedObject:(id)arg1 readMetadata:(_Bool)arg2 cache:(id)arg3;
+ (id)eventValueFromManagedObject:(id)arg1 streamName:(id)arg2 readMetadata:(_Bool)arg3 cache:(id)arg4;
+ (id)eventStreamFromManagedObject:(id)arg1 forValue:(id)arg2 cache:(id)arg3;
+ (id)eventWithStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 value:(id)arg4;
+ (id)uncachedEventValueFromManagedObject:(id)arg1 readMetadata:(_Bool)arg2 cache:(id)arg3;
+ (_Bool)copyMetadata:(id)arg1 toManagedObject:(id)arg2;
+ (id)fetchCustomMetadataWithName:(id)arg1 valueHash:(id)arg2 context:(id)arg3;
+ (id)eventWithStream:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 categoryIntegerValue:(long long)arg5 confidence:(double)arg6 metadata:(id)arg7;
+ (id)eventWithStream:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 quantityDoubleValue:(double)arg5 confidence:(double)arg6 metadata:(id)arg7;
+ (id)eventWithStream:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 identifierStringValue:(id)arg5 confidence:(double)arg6 metadata:(id)arg7;
+ (id)eventWithStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 value:(id)arg4 confidence:(double)arg5 metadata:(id)arg6;
+ (id)eventWithStream:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 categoryIntegerValue:(long long)arg5 metadata:(id)arg6;
+ (id)eventWithStream:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 quantityDoubleValue:(double)arg5 metadata:(id)arg6;
+ (id)eventWithStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 categoryIntegerValue:(long long)arg4 metadata:(id)arg5;
+ (id)eventWithStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 quantityDoubleValue:(double)arg4 metadata:(id)arg5;

- (double)doubleValue;
- (_Bool)isEqual:(id)arg1;
- (_Bool)boolValue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)stringValue;
- (long long)integerValue;
- (id)interaction;
- (long long)compareValue:(id)arg1;
- (id)primaryValue;
- (id)toPBCodable;
- (id)relevantShortcut;
- (void)fetchInteractionWithPopulatedKeyImage:(CDUnknownBlockType)arg1;
- (_Bool)copyToManagedObject:(id)arg1;
- (id)metadataFromStructuredMetadata:(id)arg1;
- (id)metadataFromCustomMetadata:(id)arg1;
- (id)metadataFromCustomMetadata:(id)arg1 cache:(id)arg2;
- (id)metadataFromStructuredMetadata:(id)arg1 cache:(id)arg2;
- (unsigned long long)eventValueClassOf:(id)arg1;
- (id)initWithStream:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 value:(id)arg5 confidence:(double)arg6 metadata:(id)arg7;

@end
