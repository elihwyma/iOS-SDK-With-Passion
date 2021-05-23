/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSExtension.h>

@interface NSExtension (MapsExtension)

- (id)_displayName;
- (id)_containingAppIdentifer;
- (id)_extensionVendorContextForUUID:(id)arg1 withErrorHandler:(CDUnknownBlockType)arg2;
- (_Bool)_canSupportIntentClass:(Class)arg1;
- (id)_containingAppDisplayName;
- (unsigned long long)_mapExtensionType;
- (id)_iconWithFormat:(int)arg1;
- (_Bool)_canSupportIntent:(id)arg1;

@end
