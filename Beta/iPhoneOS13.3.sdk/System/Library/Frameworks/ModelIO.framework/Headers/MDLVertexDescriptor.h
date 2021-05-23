/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <Foundation/NSObject.h>

#import <ModelIO/Swift-Protocol.h>

@class NSMutableArray;

@interface MDLVertexDescriptor : NSObject <Swift>

{
    NSMutableArray *_attributes;
    NSMutableArray *_layouts;
}

@property (retain, nonatomic) NSMutableArray *attributes;
@property (retain, nonatomic) NSMutableArray *layouts;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)reset;
- (id)attributeNamed:(id)arg1;
- (void)addOrReplaceAttribute:(id)arg1;
- (void)setPackedOffsets;
- (void)setPackedStrides;
- (void)debugPrintToFile:(struct __sFILE *)arg1;
- (id)initWithVertexDescriptor:(id)arg1;
- (void)removeAttributeNamed:(id)arg1;

@end
