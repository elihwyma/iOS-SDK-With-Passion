/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

#import <WatchKit/WKInterfaceObject.h>

@interface WKInterfaceMap : WKInterfaceObject

- (void)setRegion:(CDStruct_2b0c6e0b)arg1;
- (void)removeAllAnnotations;
- (void)setVisibleMapRect:(CDStruct_90e2a262)arg1;
- (void)addAnnotation:(struct CLLocationCoordinate2D)arg1 withImage:(id)arg2 centerOffset:(struct CGPoint)arg3;
- (void)addAnnotation:(struct CLLocationCoordinate2D)arg1 withImageNamed:(id)arg2 centerOffset:(struct CGPoint)arg3;
- (void)addAnnotation:(struct CLLocationCoordinate2D)arg1 withPinColor:(long long)arg2;

@end
