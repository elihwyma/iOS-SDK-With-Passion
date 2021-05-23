/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

#import <MapKit/Swift-Protocol.h>

@class MKAnnotationView, NSString, VKCustomFeature;

__attribute__((visibility("hidden")))
@interface _MKAnnotationViewCustomFeatureAnnotation : NSObject <Swift>

{
    VKCustomFeature *_customFeature;
    MKAnnotationView *_annotationView;
    CDStruct_2c43369c _coordinate;
}

@property (nonatomic, readonly) VKCustomFeature *feature;
@property (nonatomic) CDStruct_c3b9c2ee coordinate;
@property (weak, nonatomic) MKAnnotationView *annotationView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) double course;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCustomFeature:(id)arg1;

@end
