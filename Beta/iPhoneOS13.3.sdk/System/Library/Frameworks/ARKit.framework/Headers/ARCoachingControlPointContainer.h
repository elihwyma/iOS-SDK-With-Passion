/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@interface ARCoachingControlPointContainer : NSObject

{
    struct vector<ARCoachingControlPoint, std::__1::allocator<ARCoachingControlPoint>> _controlPoints;
}

@property (nonatomic, readonly) CDStruct_37a3040a *controlPoints;
@property (nonatomic, readonly) unsigned int numControlPoints;

- (id).cxx_construct;
- (id)initWithControlPoints:(CDStruct_37a3040a *)arg1 numControlPoints:(int)arg2;
- (void)overwriteWithControlPoints:(CDStruct_37a3040a *)arg1 numControlPoints:(int)arg2;

@end
