/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXJSONObject.h>

@class NSString;

@interface SXMapItem : SXJSONObject

@property (nonatomic, readonly) struct CLLocationCoordinate2D coordinate;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) long long type;

@end
