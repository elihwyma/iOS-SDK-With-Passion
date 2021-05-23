/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CPRotatedText : NSObject

{
    NSMutableArray *zones;
}

- (void)dealloc;
- (void)makeRotationZonesIn:(id)arg1;
- (id)rotationZones;
- (void)addRotationZonesTo:(id)arg1;

@end
