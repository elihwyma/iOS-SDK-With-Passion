/*
 Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

#import <Foundation/NSObject.h>

@class NRDevice, NSCache;

@interface PBBridgeWatchAttributeController : NSObject

{
    unsigned long long _edition;
    unsigned long long _material;
    unsigned long long _internalSize;
    unsigned long long _hardwareBehavior;
    NRDevice *_device;
    NSCache *_stringCache;
}

@property (retain, nonatomic) NSCache *stringCache;
@property (nonatomic, readonly) unsigned long long edition;
@property (nonatomic, readonly) unsigned long long material;
@property (nonatomic, readonly) unsigned long long internalSize;
@property (nonatomic, readonly) unsigned long long size;
@property (nonatomic, readonly) unsigned long long hardwareBehavior;
@property (nonatomic, readonly) _Bool hasTwoYearWarranty;
@property (retain, nonatomic) NRDevice *device;

+ (id)sharedDeviceController;
+ (unsigned long long)materialFromDevice:(id)arg1;
+ (unsigned long long)sizeFromDevice:(id)arg1;
+ (id)resourceString:(id)arg1 material:(unsigned long long)arg2 size:(unsigned long long)arg3 forAttributes:(unsigned long long)arg4;
+ (unsigned short)sizeFromInternalSize:(unsigned long long)arg1;
+ (id)materialDescription:(unsigned long long)arg1;
+ (id)sizeDescription:(unsigned long long)arg1;
+ (id)editionDescription:(unsigned long long)arg1;
+ (id)hwBehaviorDescription:(unsigned long long)arg1;
+ (id)materialKeyColorForMaterial:(unsigned long long)arg1;
+ (unsigned long long)_materialForCLHSValue:(unsigned long long)arg1;

- (id)init;
- (void)setMaterial:(unsigned long long)arg1;
- (void)setInternalSize:(unsigned long long)arg1;
- (id)resourceString:(id)arg1 forAttributes:(unsigned long long)arg2;
- (id)attributesDescription;
- (void)_setMaterialWithCLHSValue:(unsigned long long)arg1;
- (id)getGestaltDmin;
- (void)_populateMaterialDetailsWithDMinProperities:(id)arg1;
- (id)materialKeyColor;

@end
