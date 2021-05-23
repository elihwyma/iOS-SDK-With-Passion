/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSSet;

@interface PXDiagnosticsItemProvider : NSObject

{
    NSMutableDictionary *__loadHandlers;
}

@property (nonatomic, readonly) NSMutableDictionary *_loadHandlers;
@property (nonatomic, readonly) NSSet *registeredIdentifiers;

+ (id)providerWithItem:(id)arg1 identifier:(id)arg2;

- (id)init;
- (id)itemForIdentifier:(id)arg1;
- (void)registerItemForIdentifier:(id)arg1 loadHandler:(CDUnknownBlockType)arg2;
- (_Bool)hasItemForIdentifier:(id)arg1;
- (void)registerItem:(id)arg1 forIdentifier:(id)arg2;

@end
