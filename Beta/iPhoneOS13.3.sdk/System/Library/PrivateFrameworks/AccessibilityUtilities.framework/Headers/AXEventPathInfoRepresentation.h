/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AXEventPathInfoRepresentation : NSObject

{
    unsigned char _pathIndex;
    unsigned char _pathIdentity;
    unsigned char _pathProximity;
    _Bool _shouldSetTouchFlag;
    unsigned int _pathWindowContextID;
    float _pathPressure;
    float _pathMajorRadius;
    float _pathMinorRadius;
    float _pathMajorRadiusTolerance;
    float _pathTwist;
    float _pathQuality;
    float _pathDensity;
    unsigned int _pathEventMask;
    float _orbValue;
    unsigned int _transducerType;
    float _altitude;
    float _azimuth;
    float _barrelPressure;
    unsigned int _willUpdateMask;
    unsigned int _didUpdateMask;
    void *_pathWindow;
    struct CGPoint _pathLocation;
}

@property (nonatomic) void *pathWindow;
@property (nonatomic) unsigned char pathIndex;
@property (nonatomic) unsigned char pathIdentity;
@property (nonatomic) struct CGPoint pathLocation;
@property (nonatomic) unsigned int pathWindowContextID;
@property (nonatomic) unsigned char pathProximity;
@property (nonatomic) float pathPressure;
@property (nonatomic) float pathMajorRadius;
@property (nonatomic) float pathMinorRadius;
@property (nonatomic) float pathMajorRadiusTolerance;
@property (nonatomic) float pathTwist;
@property (nonatomic) float pathQuality;
@property (nonatomic) float pathDensity;
@property (nonatomic) unsigned int pathEventMask;
@property (nonatomic) float orbValue;
@property (nonatomic) unsigned int transducerType;
@property (nonatomic) float altitude;
@property (nonatomic) float azimuth;
@property (nonatomic) float barrelPressure;
@property (nonatomic) unsigned int willUpdateMask;
@property (nonatomic) unsigned int didUpdateMask;
@property (nonatomic) _Bool shouldSetTouchFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)representationWithPathInfo:(CDStruct_723b0d29 *)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeToPathInfo:(CDStruct_723b0d29 *)arg1;
- (id)accessibilityEventRepresentationTabularDescription;

@end
