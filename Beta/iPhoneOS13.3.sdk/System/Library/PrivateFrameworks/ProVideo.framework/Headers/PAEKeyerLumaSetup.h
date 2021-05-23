/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

#import <ProVideo/Swift-Protocol.h>

@class NSNumber;

@interface PAEKeyerLumaSetup : NSObject <Swift>

{
    NSNumber *_lumA;
    NSNumber *_lumB;
    NSNumber *_lumC;
    NSNumber *_lumD;
}

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualTo:(id)arg1;
- (id)interpolateBetween:(id)arg1 withWeight:(float)arg2;
- (float)lumA;
- (float)lumB;
- (float)lumC;
- (float)lumD;
- (void)setLumA:(float)arg1;
- (void)setLumB:(float)arg1;
- (void)setLumC:(float)arg1;
- (void)setLumD:(float)arg1;
- (void)setLumANumber:(id)arg1;
- (void)setLumBNumber:(id)arg1;
- (void)setLumCNumber:(id)arg1;
- (void)setLumDNumber:(id)arg1;

@end
