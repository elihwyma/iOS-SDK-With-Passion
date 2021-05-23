/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

#import <MapKit/Swift-Protocol.h>

@class NSArray, NSString;

@interface MKClusterAnnotation : NSObject <Swift>

{
    NSArray *_memberAnnotations;
    NSString *_clusteringIdentifier;
    struct CLLocationCoordinate2D __coordinate;
    NSString *__title;
    NSString *__subtitle;
    CDStruct_81fb2dc1 _flags;
}

@property (copy, nonatomic) NSString *clusteringIdentifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic, readonly) NSArray *memberAnnotations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct CLLocationCoordinate2D coordinate;

- (_Bool)isEqual:(id)arg1;
- (id)initWithMemberAnnotations:(id)arg1;
- (_Bool)_isMKClusterAnnotation;
- (void)_memberAnnotationCoordinateDidChange;
- (struct CLLocationCoordinate2D)_averageCoordinate;

@end
