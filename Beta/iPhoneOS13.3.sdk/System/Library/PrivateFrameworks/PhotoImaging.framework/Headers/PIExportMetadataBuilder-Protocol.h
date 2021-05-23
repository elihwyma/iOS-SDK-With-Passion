/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <PhotoImaging/Swift-Protocol.h>

@class CLLocation, NSArray, NSDate, NSString, NSTimeZone;

@protocol PIExportMetadataBuilder <Swift>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *caption;
@property (copy, nonatomic) NSArray *keywords;
@property (copy, nonatomic) NSArray *peopleNames;
@property (copy, nonatomic) CLLocation *location;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSTimeZone *creationTimeZone;

- (unsigned short)setCreationDate:timeZone: /* Error: Ran out of types for this method. */;

@end
