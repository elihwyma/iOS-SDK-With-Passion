/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@class GEOPBTransitIncident, NSArray, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface _GEOTransitIncident : NSObject <Swift>

{
    GEOPBTransitIncident *_incident;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *summary;
@property (nonatomic, readonly) NSString *fullDescription;
@property (nonatomic, readonly) NSString *messageForRoutePlanning;
@property (nonatomic, readonly) NSString *messageForRouteStepping;
@property (nonatomic, readonly) NSString *messageForNonRoutable;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) int iconType;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSDate *lastUpdated;
@property (nonatomic, readonly, getter=isBlockingIncident) _Bool blockingIncident;
@property (nonatomic, readonly) NSArray *affectedEntities;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIncident:(id)arg1;

@end
