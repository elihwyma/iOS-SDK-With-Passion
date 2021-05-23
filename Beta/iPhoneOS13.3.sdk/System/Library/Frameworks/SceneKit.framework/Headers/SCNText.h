/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNGeometry.h>

@class NSString, UIBezierPath, UIFont;

@interface SCNText : SCNGeometry

{
    float _flatness;
    float _chamferRadius;
    float _extrusionDepth;
    float _discretizedStraightLineMaxLength;
    UIBezierPath *_chamferProfile;
    long long _primitiveType;
    id _string;
    UIFont *_font;
    _Bool _wrapped;
    int _alignmentMode;
    int _truncationMode;
    _Bool _useCustomContainerFrame;
    struct CGRect _customContainerFrame;
    _Bool __wantsSeparateGeometryElements;
}

@property (nonatomic) double extrusionDepth;
@property (copy, nonatomic) id string;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic, getter=isWrapped) _Bool wrapped;
@property (nonatomic) struct CGRect containerFrame;
@property (copy, nonatomic) NSString *truncationMode;
@property (copy, nonatomic) NSString *alignmentMode;
@property (nonatomic) double chamferRadius;
@property (copy, nonatomic) UIBezierPath *chamferProfile;
@property (nonatomic) double flatness;

+ (_Bool)supportsSecureCoding;
+ (id)text;
+ (id)textWithString:(id)arg1 extrusionDepth:(double)arg2;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (CDStruct_8bd95810)params;
- (long long)primitiveType;
- (void)setPrimitiveType:(long long)arg1;
- (_Bool)getBoundingBoxMin:(struct SCNVector3 *)arg1 max:(struct SCNVector3 *)arg2;
- (id)presentationGeometry;
- (_Bool)getBoundingSphereCenter:(struct SCNVector3 *)arg1 radius:(double *)arg2;
- (struct __C3DGeometry *)__createCFObject;
- (void)_syncObjCModel:(struct __C3DTextGeometry *)arg1;
- (id)initPresentationTextGeometryWithTextGeometryRef:(struct __C3DTextGeometry *)arg1;
- (id)initWithTextGeometryRef:(struct __C3DTextGeometry *)arg1;
- (void)_customEncodingOfSCNText:(id)arg1;
- (void)_customDecodingOfSCNText:(id)arg1;
- (void)setDiscretizedStraightLineMaxLength:(double)arg1;
- (void)set_wantsSeparateGeometryElements:(_Bool)arg1;
- (id)copyAnimationPathForKeyPath:(id)arg1 animation:(id)arg2;
- (_Bool)_wantsSeparateGeometryElements;
- (double)discretizedStraightLineMaxLength;

@end
