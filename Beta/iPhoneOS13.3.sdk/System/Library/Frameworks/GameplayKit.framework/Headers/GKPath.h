/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE;

@interface GKPath : NSObject

{
    struct PolylinePathway _pathway;
}

@property (nonatomic) float radius;
@property (readonly) unsigned long long numPoints;
@property (nonatomic, getter=isCyclical) _Bool cyclical;

+ (id)pathWithPoints:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2 radius:(float)arg3 cyclical:(_Bool)arg4;
+ (id)pathWithGraphNodes:(id)arg1 radius:(float)arg2;
+ (id)pathWithFloat3Points:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2 radius:(float)arg3 cyclical:(_Bool)arg4;

- (id).cxx_construct;
- (MISSING_TYPE *)pointAtIndex:(unsigned long long)arg1;
- (struct PolylinePathway *)pathway;
- (void)set_cyclical:(_Bool)arg1;
- (_Bool)_cyclical;
- (id)initWithPoints:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2 radius:(float)arg3 cyclical:(_Bool)arg4;
- (id)initWithGraphNodes:(id)arg1 radius:(float)arg2;
- (id)initWithFloat3Points:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2 radius:(float)arg3 cyclical:(_Bool)arg4;
- (MISSING_TYPE *)float2AtIndex:(unsigned long long)arg1;
- (MISSING_TYPE *)float3AtIndex:(unsigned long long)arg1;

@end
