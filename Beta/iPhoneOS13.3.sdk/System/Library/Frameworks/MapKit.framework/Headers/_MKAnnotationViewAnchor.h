/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <VectorKit/VKAnchorWrapper.h>

@class MKAnnotationView;

__attribute__((visibility("hidden")))
@interface _MKAnnotationViewAnchor : VKAnchorWrapper

{
    MKAnnotationView *_annotationView;
}

@property (nonatomic) MKAnnotationView *annotationView;

- (CDStruct_c3b9c2ee)coordinate;

@end
