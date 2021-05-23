/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

#import <NeutrinoCore/Swift-Protocol.h>

@class NSMutableArray, NUSpace;

@interface _NUTaggedSpace : NSObject <Swift>

{
    NSMutableArray *_tagNodes;
    NUSpace *_space;
}

@property (readonly) NUSpace *space;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSpace:(id)arg1;
- (_Bool)hasTransform;
- (id)tagNodes;
- (void)addTagNode:(id)arg1;
- (void)addTagNodes:(id)arg1;
- (void)mergeSpace:(id)arg1;
- (_Bool)isEqualToTaggedImageSpace:(id)arg1;

@end
