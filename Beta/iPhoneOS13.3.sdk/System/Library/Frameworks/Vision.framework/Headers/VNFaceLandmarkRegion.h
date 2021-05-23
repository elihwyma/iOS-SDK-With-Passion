/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@interface VNFaceLandmarkRegion : NSObject

{
    struct CGRect _faceBoundingBox;
    unsigned long long _pointCount;
    unsigned long long _requestRevision;
}

@property struct CGRect faceBoundingBox;
@property unsigned long long pointCount;
@property (nonatomic, readonly) unsigned long long requestRevision;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1 faceBoundingBox:(struct CGRect)arg2;

@end
