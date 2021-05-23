/*
 Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
 */

#import <PhotoVision/PVObject.h>

@class NSArray, NSString;

@interface PVFaceGroup : PVObject

{
    long long _personBuilderState;
    NSString *_personLocalIdentifier;
    NSString *_representativeFaceLocalIdentifier;
    NSArray *_faces;
}

@property (nonatomic) long long personBuilderState;
@property (copy, nonatomic) NSString *personLocalIdentifier;
@property (copy, nonatomic) NSString *representativeFaceLocalIdentifier;
@property (retain, nonatomic) NSArray *faces;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFaceGroup:(id)arg1;
- (void)_setPropertiesFrom:(id)arg1;

@end
