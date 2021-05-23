/*
 Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

#import <Foundation/NSMutableDictionary.h>

@interface NSMutableDictionary (PKMerge)

- (id)_mutableDictionaryAtKeyPath:(struct NSArray *)arg1;
- (void)_overlayCustomValueAtKeyPath:(struct NSArray *)arg1 intoTargetDictionary:(id)arg2 fromSourceDictionary:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_overlayValueAtKey:(id)arg1 intoTargetDictionary:(id)arg2 fromSourceDictionary:(id)arg3 targetTakePrecedent:(_Bool)arg4 nestedDictionaryHandler:(CDUnknownBlockType)arg5;
- (id)_createOrConvertToMutableDictionaryFromDictionary:(id)arg1;
- (void)pk_overlayDictionary:(id)arg1 existingValuesTakePrecedent:(_Bool)arg2 exceptKeyPaths:(struct NSSet *)arg3 exemptionHandler:(CDUnknownBlockType)arg4;
- (void)pk_removeItemsAtKeyPaths:(struct NSSet *)arg1;

@end
