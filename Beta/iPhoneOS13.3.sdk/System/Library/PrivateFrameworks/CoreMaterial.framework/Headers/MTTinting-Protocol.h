/*
 Image: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
 */

#import <CoreMaterial/Swift-Protocol.h>

@class NSDictionary;

@protocol MTTinting <Swift>

@property (copy, nonatomic, readonly) NSDictionary *tintColorDescription;
@property (nonatomic, readonly) struct CGColor *tintColor;
@property (nonatomic, readonly) double tintAlpha;

@end
