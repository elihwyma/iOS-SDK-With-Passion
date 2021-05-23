/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <TouchML/Swift-Protocol.h>

@class NSString;

@protocol MKAnnotation <Swift>

@property (nonatomic, readonly) struct CLLocationCoordinate2D coordinate;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *subtitle;

@end
