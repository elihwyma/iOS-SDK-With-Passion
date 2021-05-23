/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface PAEKeyerOMVertex : NSObject

{
    NSNumber *_lx;
    NSNumber *_mx;
    NSNumber *_rx;
    NSNumber *_bx;
    NSNumber *_ly;
    NSNumber *_my;
    NSNumber *_ry;
    NSNumber *_by;
}

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (float)lx;
- (void)setLx:(id)arg1;
- (float)ly;
- (void)setLy:(id)arg1;
- (float)by;
- (float)bx;
- (void)setBx:(id)arg1;
- (void)setBy:(id)arg1;
- (void)setRx:(id)arg1;
- (float)rx;
- (void)setMx:(id)arg1;
- (void)setMy:(id)arg1;
- (void)setRy:(id)arg1;
- (float)mx;
- (float)my;
- (float)ry;

@end
