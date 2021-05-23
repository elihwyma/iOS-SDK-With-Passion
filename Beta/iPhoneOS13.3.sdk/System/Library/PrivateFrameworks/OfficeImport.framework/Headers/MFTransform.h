/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@protocol MFDeviceDriver;

__attribute__((visibility("hidden")))
@interface MFTransform : NSObject <Swift>

{
    struct CGAffineTransform m_world;
    struct CGPoint m_windowOrg;
    struct CGPoint m_windowExt;
    struct CGPoint m_viewportOrg;
    struct CGPoint m_viewportExt;
    struct CGAffineTransform m_combinedTransform;
    int m_mapMode;
    NSObject<MFDeviceDriver> *m_deviceDriver;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)updateTransform;
- (id)initWithDriver:(id)arg1;
- (int)setMapMode:(int)arg1;
- (int)setWorldTransform:(const struct CGAffineTransform *)arg1;
- (struct CGAffineTransform)getTransformMatrix;
- (struct CGAffineTransform)getWorldMatrix;
- (void)setWorldMatrix:(struct CGAffineTransform)arg1;
- (struct CGPoint)getWindowOrg;
- (void)setWindowOrg:(struct CGPoint)arg1;
- (struct CGPoint)getWindowExtent;
- (void)setWindowExt:(struct CGPoint)arg1;
- (struct CGPoint)getViewportOrg;
- (void)setViewportOrg:(struct CGPoint)arg1;
- (struct CGPoint)getViewportExtent;
- (void)setViewportExt:(struct CGPoint)arg1;
- (void)setTransformMatrix:(struct CGAffineTransform)arg1;
- (int)getMapMode;
- (int)modifyWorldTransform:(const struct CGAffineTransform *)arg1 in_command:(int)arg2;
- (_Bool)isUpsideDown;
- (int)setWindowExt:(int)arg1 in_y:(int)arg2;
- (int)setViewportExt:(int)arg1 in_y:(int)arg2;
- (int)scaleWindowExt:(int)arg1 in_xDenom:(int)arg2 in_yNum:(int)arg3 in_yDenom:(int)arg4;
- (int)scaleViewportExt:(int)arg1 in_xDenom:(int)arg2 in_yNum:(int)arg3 in_yDenom:(int)arg4;
- (int)setWindowOrg:(int)arg1 in_y:(int)arg2;
- (int)setViewportOrg:(int)arg1 in_y:(int)arg2;
- (int)offsetWindowOrg:(int)arg1 in_y:(int)arg2;
- (int)offsetViewportOrg:(int)arg1 in_y:(int)arg2;
- (struct CGPoint)DPtoLP:(struct CGPoint)arg1;
- (struct CGPoint)LPtoDP:(struct CGPoint)arg1;

@end
