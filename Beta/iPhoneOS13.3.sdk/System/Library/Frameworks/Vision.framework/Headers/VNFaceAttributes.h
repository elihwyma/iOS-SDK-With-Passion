/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class VNFaceAttributeCategory;

@interface VNFaceAttributes : NSObject

{
    VNFaceAttributeCategory *_ageCategory;
    VNFaceAttributeCategory *_genderCategory;
    VNFaceAttributeCategory *_eyesCategory;
    VNFaceAttributeCategory *_smilingCategory;
    VNFaceAttributeCategory *_faceHairCategory;
    VNFaceAttributeCategory *_hairColorCategory;
    VNFaceAttributeCategory *_baldCategory;
    VNFaceAttributeCategory *_glassesCategory;
    VNFaceAttributeCategory *_makeupCategory;
    VNFaceAttributeCategory *_makeupEyesCategory;
    VNFaceAttributeCategory *_makeupLipsCategory;
    unsigned long long _requestRevision;
}

@property (retain) VNFaceAttributeCategory *ageCategory;
@property (retain) VNFaceAttributeCategory *genderCategory;
@property (retain) VNFaceAttributeCategory *eyesCategory;
@property (retain) VNFaceAttributeCategory *smilingCategory;
@property (retain) VNFaceAttributeCategory *faceHairCategory;
@property (retain) VNFaceAttributeCategory *hairColorCategory;
@property (retain) VNFaceAttributeCategory *baldCategory;
@property (retain) VNFaceAttributeCategory *glassesCategory;
@property (retain) VNFaceAttributeCategory *makeupCategory;
@property (retain) VNFaceAttributeCategory *makeupEyesCategory;
@property (retain) VNFaceAttributeCategory *makeupLipsCategory;
@property (nonatomic, readonly) unsigned long long requestRevision;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1;

@end
