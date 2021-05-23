/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/Swift-Protocol.h>

@class NSArray, NSDate, NSString;

@protocol GEOTransitIncident <Swift>

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

@end
