/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSDate, NSNumber, NSString;

@protocol PLAssetDateDescriptor <Swift>

@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) NSDate *utcDate;
@property (nonatomic, readonly) NSString *rawTimeZoneName;
@property (nonatomic, readonly) NSNumber *rawTimeZoneOffsetValue;
@property (nonatomic, readonly) struct CLLocationCoordinate2D coordinate;

- (unsigned short)localDateAndCreateIfNeededWithLocalDateCreator: /* Error: Ran out of types for this method. */;

@end
