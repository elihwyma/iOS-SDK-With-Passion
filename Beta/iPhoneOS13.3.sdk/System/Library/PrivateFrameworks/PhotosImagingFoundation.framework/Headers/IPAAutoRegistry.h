/*
 Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

#import <NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface IPAAutoRegistry : NSObject

{
    NSObject<OS_dispatch_queue> *_serializer;
    NSMutableDictionary *_entries;
}

+ (id)sharedRegistry;
+ (void)setSharedRegistry:(id)arg1;

- (id)init;
- (void)registerAutoCalculatorSettingsClass:(Class)arg1 toAutoIdentifier:(id)arg2 operationIdentifier:(id)arg3;
- (void)registerAutoCalculatorSettingsClass:(Class)arg1 toAutoIdentifier:(id)arg2 operationIdentifier:(id)arg3 persistable:(_Bool)arg4;
- (id)_entryForAutoIdentifier:(id)arg1 operationIdentifier:(id)arg2;
- (_Bool)hasMappingForAutoIdentifier:(id)arg1 operationIdentifier:(id)arg2;
- (Class)settingsClassForAutoIdentifier:(id)arg1 operationIdentifier:(id)arg2;
- (_Bool)isPersistableAutoIdentifier:(id)arg1 forOperationIdentifier:(id)arg2;

@end
