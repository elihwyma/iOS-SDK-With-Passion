/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface _NURAWCameraSpaceProperties : NSObject

{
    NSArray *_xyzToCamera1;
    NSArray *_xyzToCamera2;
    double _whiteValue;
    double _whiteFactor;
}

@property (retain) NSArray *xyzToCamera1;
@property (retain) NSArray *xyzToCamera2;
@property double whiteValue;
@property double whiteFactor;

- (id)description;

@end
