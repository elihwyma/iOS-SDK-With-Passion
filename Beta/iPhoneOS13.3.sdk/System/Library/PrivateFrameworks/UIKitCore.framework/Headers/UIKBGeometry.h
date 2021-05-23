/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString;

@interface UIKBGeometry : NSObject <Swift>

{
    NSString *m_name;
    CDStruct_73524d89 m_x;
    CDStruct_73524d89 m_y;
    CDStruct_73524d89 m_w;
    CDStruct_73524d89 m_h;
    CDStruct_73524d89 m_paddingTop;
    CDStruct_73524d89 m_paddingLeft;
    CDStruct_73524d89 m_paddingBottom;
    CDStruct_73524d89 m_paddingRight;
    _Bool m_explicitlySpecified;
    _Bool m_isTemplate;
}

@property (retain, nonatomic) NSString *name;
@property (nonatomic, setter=setX:) CDStruct_73524d89 x;
@property (nonatomic, setter=setY:) CDStruct_73524d89 y;
@property (nonatomic, setter=setW:) CDStruct_73524d89 w;
@property (nonatomic, setter=setH:) CDStruct_73524d89 h;
@property (nonatomic, setter=setPaddingTop:) CDStruct_73524d89 paddingTop;
@property (nonatomic, setter=setPaddingLeft:) CDStruct_73524d89 paddingLeft;
@property (nonatomic, setter=setPaddingBottom:) CDStruct_73524d89 paddingBottom;
@property (nonatomic, setter=setPaddingRight:) CDStruct_73524d89 paddingRight;
@property (nonatomic) _Bool explicitlySpecified;
@property (nonatomic) _Bool isTemplate;

+ (id)geometry;
+ (id)geometryWithRect:(struct CGRect)arg1;
+ (id)geometryWithOriginValue:(CDStruct_73524d89)arg1 sizeValue:(CDStruct_73524d89)arg2;
+ (id)codeStringForValue:(CDStruct_73524d89)arg1;
+ (void)performOperations:(CDUnknownBlockType)arg1 withScale:(double)arg2;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct CGRect)frame;
- (id)shortDescription;
- (id)initWithName:(id)arg1 rect:(CDStruct_bd7e7c01)arg2 padding:(CDStruct_bd7e7c01)arg3;
- (struct CGRect)frameWithContainingFrame:(struct CGRect)arg1;
- (struct CGRect)paddedFrameWithResolvedFrame:(struct CGRect)arg1;
- (id)initTemplateWithName:(id)arg1 rect:(CDStruct_bd7e7c01)arg2 padding:(CDStruct_bd7e7c01)arg3;
- (struct CGRect)paddedFrameWithContainingFrame:(struct CGRect)arg1;
- (id)overrideGeometry:(id)arg1;
- (_Bool)usesPercentages;
- (_Bool)usesAutomaticMetrics;

@end
