/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface MKTileOverlayTile : NSObject

{
    CDStruct_cbb88d5e _path;
    CDStruct_02837cd9 _frame;
    double _scale;
    NSData *_image;
}

@property (nonatomic) CDStruct_cbb88d5e path;
@property (nonatomic) CDStruct_02837cd9 frame;
@property (nonatomic) double scale;
@property (retain, nonatomic) NSData *image;

- (id)description;

@end
