/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class SCNGeometry;

@interface SCNLevelOfDetail : NSObject

{
    struct __C3DLOD *_lod;
    long long _mode;
    SCNGeometry *_geometry;
}

@property (readonly) SCNGeometry *geometry;
@property (readonly) double screenSpaceRadius;
@property (readonly) double worldSpaceDistance;

+ (_Bool)supportsSecureCoding;
+ (id)levelOfDetailWithGeometry:(id)arg1 screenSpaceRadius:(double)arg2;
+ (id)levelOfDetailWithGeometry:(id)arg1 worldSpaceDistance:(double)arg2;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (const void *)__CFObject;
- (long long)thresholdMode;
- (id)thresholdValue;
- (void)_setupWithGeometry:(id)arg1 thresholdMode:(long long)arg2 value:(double)arg3;
- (id)initWithGeometry:(id)arg1 thresholdMode:(long long)arg2 lod:(struct __C3DLOD *)arg3;
- (void)_customEncodingOfSCNLevelOfDetail:(id)arg1;
- (void)_didDecodeSCNLevelOfDetail:(id)arg1;
- (id)initWithGeometry:(id)arg1 thresholdMode:(long long)arg2 thresholdValue:(id)arg3;

@end
