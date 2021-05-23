/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NUZoomFactorScalePolicy : NSObject

{
    double _zoomFactor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (CDStruct_912cb5d2)scaleForImageSize:(CDStruct_912cb5d2)arg1;
- (id)initWithZoomFactor:(double)arg1;

@end
