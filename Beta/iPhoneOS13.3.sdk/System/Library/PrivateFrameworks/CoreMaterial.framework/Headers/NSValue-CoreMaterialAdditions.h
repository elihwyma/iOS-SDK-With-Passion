/*
 Image: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
 */

#import <Foundation/NSValue.h>

@class NSString;

@interface NSValue (CoreMaterialAdditions)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)mt_identityValueForMaterialSettingsProperty:(id)arg1;
+ (id)mt_identityValueForFilter:(id)arg1;

- (_Bool)mt_isIdentityValueForMaterialSettingsProperty:(id)arg1;
- (_Bool)mt_isIdentityValueForFilter:(id)arg1;

@end
