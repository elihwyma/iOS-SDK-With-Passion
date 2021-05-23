/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <CalendarDaemon/EKPredicate.h>

@class NSString;

@interface CADEventCreatedFromSuggestionPredicate : EKPredicate

{
    NSString *_opaqueKey;
    NSString *_extractionGroupIdentifier;
}

@property (nonatomic, readonly) NSString *opaqueKey;
@property (nonatomic, readonly) NSString *extractionGroupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)predicateFormat;
- (id)defaultPropertiesToLoad;
- (_Bool)shouldLoadDefaultProperties;
- (id)initWithOpaqueKey:(id)arg1;
- (id)initWithExtractionGroupIdentifier:(id)arg1;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg1;
- (id)initWithOpaqueKey:(id)arg1 extractionGroupIdentifier:(id)arg2;

@end
