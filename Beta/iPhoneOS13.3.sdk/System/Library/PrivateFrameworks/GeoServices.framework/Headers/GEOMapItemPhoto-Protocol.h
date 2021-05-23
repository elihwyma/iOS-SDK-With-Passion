/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class NSString, NSURL;

@protocol GEOMapItemPhoto <Swift>

@property (nonatomic, readonly) NSString *author;
@property (nonatomic, readonly) NSString *caption;
@property (nonatomic, readonly) NSString *licenseDescription;
@property (nonatomic, readonly) NSURL *licenseURL;
@property (nonatomic, readonly) _Bool displayFullPhotoInline;
@property (nonatomic, readonly) _Bool useGallery;
@property (nonatomic, readonly) NSString *uid;
@property (nonatomic, readonly) double sizeRatio;
@property (nonatomic, readonly) _Bool highQuality;
@property (nonatomic, readonly) _Bool businessProvided;

- (unsigned short)bestPhotoForSize:allowSmaller: /* Error: Ran out of types for this method. */;
- (unsigned short)largestPhoto;

@end
