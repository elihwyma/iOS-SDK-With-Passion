/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE, NSMutableArray, NSString, SKTexture;

@interface SKUniform : NSObject

{
    long long _type;
    NSString *_name;
    unsigned long long _seed;
    SKTexture *_textureValue;
    NSMutableArray *_targetShaders;
    union {
        float _floatValue;
        CDStruct_1c3b5cc1 _floatVector2Value___floatVector3Value___floatVector4Value___floatMatrix2Value;
        CDStruct_8e0628e6 _floatMatrix3Value;
        CDStruct_14d5dc5e _floatMatrix4Value;
    } _value;
}

@property unsigned long long _seed;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long uniformType;
@property (retain, nonatomic) SKTexture *textureValue;
@property (nonatomic) float floatValue;
@property (nonatomic) MISSING_TYPE *vectorFloat2Value;
@property (nonatomic) MISSING_TYPE *vectorFloat3Value;
@property (nonatomic) MISSING_TYPE *vectorFloat4Value;
@property (nonatomic) CDStruct_1c3b5cc1 matrixFloat2x2Value;
@property (nonatomic) CDStruct_8e0628e6 matrixFloat3x3Value;
@property (nonatomic) CDStruct_14d5dc5e matrixFloat4x4Value;
@property union _GLKVector2 floatVector2Value;
@property union _GLKVector3 floatVector3Value;
@property union _GLKVector4 floatVector4Value;
@property union _GLKMatrix2 floatMatrix2Value;
@property union _GLKMatrix3 floatMatrix3Value;
@property union _GLKMatrix4 floatMatrix4Value;

+ (_Bool)supportsSecureCoding;
+ (id)uniformWithName:(id)arg1 vectorFloat2: /* Error: Ran out of types for this method. */;
+ (id)uniformWithName:(id)arg1;
+ (id)uniformWithName:(id)arg1 float:(float)arg2;
+ (id)uniformWithName:(id)arg1 vectorFloat3: /* Error: Ran out of types for this method. */;
+ (id)uniformWithName:(id)arg1 vectorFloat4: /* Error: Ran out of types for this method. */;
+ (id)uniformWithName:(id)arg1 matrixFloat2x2:(CDStruct_1c3b5cc1)arg2;
+ (id)uniformWithName:(id)arg1 matrixFloat3x3:(CDStruct_8e0628e6)arg2;
+ (id)uniformWithName:(id)arg1 matrixFloat4x4:(CDStruct_14d5dc5e)arg2;
+ (id)uniformWithName:(id)arg1 floatVector2:(union _GLKVector2)arg2;
+ (id)uniformWithName:(id)arg1 floatVector3:(union _GLKVector3)arg2;
+ (id)uniformWithName:(id)arg1 floatVector4:(union _GLKVector4)arg2;
+ (id)uniformWithName:(id)arg1 floatMatrix2:(union _GLKMatrix2)arg2;
+ (id)uniformWithName:(id)arg1 floatMatrix3:(union _GLKMatrix3)arg2;
+ (id)uniformWithName:(id)arg1 floatMatrix4:(union _GLKMatrix4)arg2;
+ (id)uniformWithName:(id)arg1 texture:(id)arg2;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (void)_addTargetShader:(id)arg1;
- (void)_removeTargetShader:(id)arg1;
- (_Bool)isEqualToUniform:(id)arg1;
- (id)initWithName:(id)arg1 float:(float)arg2;
- (id)initWithName:(id)arg1 vectorFloat2: /* Error: Ran out of types for this method. */;
- (id)initWithName:(id)arg1 vectorFloat3: /* Error: Ran out of types for this method. */;
- (id)initWithName:(id)arg1 vectorFloat4: /* Error: Ran out of types for this method. */;
- (id)initWithName:(id)arg1 matrixFloat2x2:(CDStruct_1c3b5cc1)arg2;
- (id)initWithName:(id)arg1 matrixFloat3x3:(CDStruct_8e0628e6)arg2;
- (id)initWithName:(id)arg1 matrixFloat4x4:(CDStruct_14d5dc5e)arg2;
- (id)initWithName:(id)arg1 floatVector2:(union _GLKVector2)arg2;
- (id)initWithName:(id)arg1 floatVector3:(union _GLKVector3)arg2;
- (id)initWithName:(id)arg1 floatVector4:(union _GLKVector4)arg2;
- (id)initWithName:(id)arg1 floatMatrix2:(union _GLKMatrix2)arg2;
- (id)initWithName:(id)arg1 floatMatrix3:(union _GLKMatrix3)arg2;
- (id)initWithName:(id)arg1 floatMatrix4:(union _GLKMatrix4)arg2;
- (id)initWithName:(id)arg1 texture:(id)arg2;
- (void)_propagateChange;

@end
