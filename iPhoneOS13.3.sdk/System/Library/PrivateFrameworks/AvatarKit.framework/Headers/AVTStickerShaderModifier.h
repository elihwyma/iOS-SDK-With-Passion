//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface AVTStickerShaderModifier : NSObject
{
    BOOL _forceDoubleSided;
    NSString *_entryPoint;
    NSString *_geometryName;
    NSString *_data;
    NSArray *_properties;
}

+ (id)encapsulateShaderData:(id)arg1;
+ (id)entryPointForModifierName:(id)arg1;
+ (id)shaderModifierFromDictionary:(id)arg1 assetsPath:(id)arg2;
+ (id)shaderModifierCache;
@property(readonly, nonatomic) BOOL forceDoubleSided; // @synthesize forceDoubleSided=_forceDoubleSided;
@property(readonly, nonatomic) NSArray *properties; // @synthesize properties=_properties;
@property(readonly, nonatomic) NSString *data; // @synthesize data=_data;
@property(readonly, nonatomic) NSString *geometryName; // @synthesize geometryName=_geometryName;
@property(readonly, nonatomic) NSString *entryPoint; // @synthesize entryPoint=_entryPoint;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)applyToNodeHierarchy:(id)arg1;
- (BOOL)applyToNode:(id)arg1;
- (BOOL)applyToAvatar:(id)arg1;
- (id)findMaterialsForGeometryName:(id)arg1 inAvatar:(id)arg2;
- (BOOL)applyToMaterial:(id)arg1;
- (BOOL)removeFromMaterial:(id)arg1;
- (void)removeFromAvatar:(id)arg1 error:(id )arg2;
- (id)cloneWithProperties:(id)arg1;
- (id)initWithEntryPoint:(id)arg1 geometryName:(id)arg2 data:(id)arg3 properties:(id)arg4 forceDoubleSided:(BOOL)arg5;

@end

