/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class NSMutableArray, NSString, OADBlip;

__attribute__((visibility("hidden")))
@interface OADBlipRef : NSObject <Swift>

{
    int mIndex;
    NSString *mName;
    NSMutableArray *mEffects;
    OADBlip *mBlip;
}

+ (id)blipRefWithIndex:(int)arg1 name:(id)arg2 blip:(id)arg3;
+ (int)blipTypeForContentType:(id)arg1;
+ (int)blipTypeForExtension:(id)arg1;
+ (int)blipTypeForImageData:(id)arg1;
+ (id)blipRefWithIndex:(int)arg1 name:(id)arg2 blip:(id)arg3 effects:(id)arg4;
+ (id)inflatedExtensionForGzippedExtension:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setName:(id)arg1;
- (int)index;
- (void)setIndex:(int)arg1;
- (_Bool)isNull;
- (unsigned long long)effectCount;
- (id)effects;
- (void)addEffect:(id)arg1;
- (void)setEffects:(id)arg1;
- (id)blip;
- (id)effectAtIndex:(unsigned long long)arg1;
- (id)initWithIndex:(int)arg1 name:(id)arg2 blip:(id)arg3;
- (id)initWithIndex:(int)arg1 name:(id)arg2 blip:(id)arg3 effects:(id)arg4;
- (void)setBlip:(id)arg1;
- (void)removeEffectAtIndex:(unsigned long long)arg1;

@end
