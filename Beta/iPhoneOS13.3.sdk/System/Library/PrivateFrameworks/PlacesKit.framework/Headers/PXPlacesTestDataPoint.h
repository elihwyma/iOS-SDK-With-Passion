/*
 Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PXPlacesTestDataPoint : NSObject

{
    struct CLLocationCoordinate2D _coordinate;
    NSString *_name;
}

@property (readonly) struct CGImage *image;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct CLLocationCoordinate2D)coordinate;
- (long long)compareTo:(id)arg1;
- (id)initWithName:(id)arg1 location:(struct CLLocationCoordinate2D)arg2;

@end
