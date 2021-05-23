/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class GEOComposedWaypoint, MNTimepoint, NSDate, NSString, NSUUID, _MNTimepointAndTransportType;

@interface MNPlannedDestination : NSObject

{
    GEOComposedWaypoint *_destinationWaypoint;
    NSDate *_expirationDate;
    _MNTimepointAndTransportType *_internalTimepoint;
    NSUUID *_uuid;
}

@property (nonatomic, readonly) _MNTimepointAndTransportType *_internalTimepoint;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) GEOComposedWaypoint *destinationWaypoint;
@property (nonatomic) int transportType;
@property (copy, nonatomic) MNTimepoint *timepoint;
@property (copy, nonatomic) NSDate *expirationDate;
@property (nonatomic, readonly, getter=isExpired) _Bool expired;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)destinationFromArchiveData:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)uniqueIdentifier;
- (id)archiveData;
- (id)jsonDictionary;
- (_Bool)isDuplicateOf:(id)arg1;
- (void)_setTimepoint:(id)arg1 transportType:(int)arg2;
- (id)initWithWaypoint:(id)arg1 transportType:(int)arg2;

@end
