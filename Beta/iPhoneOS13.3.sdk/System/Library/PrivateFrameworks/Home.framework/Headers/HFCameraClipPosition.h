/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

#import <Home/Swift-Protocol.h>

@class HMCameraClip, NSDate, NSString;

@interface HFCameraClipPosition : NSObject <Swift>

{
    HMCameraClip *_clip;
    double _offset;
}

@property (nonatomic, readonly) HMCameraClip *clip;
@property (nonatomic, readonly) double offset;
@property (copy, nonatomic, readonly) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)na_identity;
+ (id)positionWithClip:(id)arg1 offset:(double)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithClip:(id)arg1 offset:(double)arg2;

@end
