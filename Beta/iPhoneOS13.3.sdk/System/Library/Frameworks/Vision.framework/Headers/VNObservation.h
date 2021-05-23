/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSUUID;

@interface VNObservation : NSObject

{
    unsigned long long _requestRevision;
    float _confidence;
    NSUUID *_uuid;
}

@property (retain, nonatomic, setter=setUUID:) NSUUID *uuid;
@property (nonatomic) float confidence;
@property (nonatomic, readonly) unsigned long long requestRevision;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1;

@end
