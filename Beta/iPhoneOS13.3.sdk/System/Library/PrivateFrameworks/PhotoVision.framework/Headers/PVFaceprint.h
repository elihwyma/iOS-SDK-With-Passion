/*
 Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
 */

#import <PhotoVision/PVObject.h>

@class NSData;

@interface PVFaceprint : PVObject

{
    unsigned int _faceprintVersion;
    NSData *_faceprintData;
}

@property (nonatomic) unsigned int faceprintVersion;
@property (retain, nonatomic) NSData *faceprintData;

+ (id)faceprintWithFaceprintData:(id)arg1 faceprintVersion:(unsigned int)arg2;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setPropertiesFrom:(id)arg1;
- (_Bool)getDistance:(float *)arg1 toOtherFaceprint:(id)arg2 error:(id *)arg3;

@end
