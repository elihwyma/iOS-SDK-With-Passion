/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@interface ARHWFaceDetection : NSObject

{
    long long _ID;
    double _rollAngleInDegrees;
    long long _detectionOrientation;
    CDStruct_1b6d18a9 _time;
    struct CGRect _boundingBox;
}

@property (nonatomic) long long ID;
@property (nonatomic) double rollAngleInDegrees;
@property (nonatomic) struct CGRect boundingBox;
@property (nonatomic) long long detectionOrientation;
@property (nonatomic) CDStruct_1b6d18a9 time;

+ (_Bool)supportsSecureCoding;
+ (id)faceDetectionFromDictionary:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToFaceDetection:(id)arg1;

@end
