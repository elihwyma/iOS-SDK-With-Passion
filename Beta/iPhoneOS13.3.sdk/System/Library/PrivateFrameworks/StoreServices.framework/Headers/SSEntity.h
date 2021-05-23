/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString, SSXPCConnection;

@protocol OS_dispatch_queue;

@interface SSEntity : NSObject

{
    SSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_localExternalValues;
    NSMutableDictionary *_localValues;
    long long _pid;
    NSArray *_dirtyLocalExternalProperties;
    NSArray *_dirtyLocalProperties;
}

@property (readonly) long long _persistentIdentifier;
@property (copy, getter=_localExternalValues, setter=_setLocalExternalValues:) NSDictionary *_localExternalValues;
@property (copy, getter=_localValues, setter=_setLocalValues:) NSDictionary *_localValues;
@property (readonly, getter=_isManaged) _Bool _managed;
@property (readonly) _Bool exists;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)_existsMessage;
+ (long long)_getExternalValuesMessage;
+ (long long)_getValueMessage;
+ (long long)_setExternalValuesMessage;
+ (long long)_setValuesMessage;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;
- (void)getValues:(id *)arg1 forProperties:(const id *)arg2 count:(unsigned long long)arg3;
- (void)resetCachedExternalProperties:(const id *)arg1 count:(unsigned long long)arg2;
- (id)valueForExternalProperty:(id)arg1;
- (_Bool)setExternalValuesWithDictionary:(id)arg1;
- (_Bool)setValuesWithDictionary:(id)arg1;
- (id)copyXPCEncoding;
- (id)_initWithPersistentIdentifier:(long long)arg1;
- (void)_becomeManagedOnConnection:(id)arg1;
- (void)_resetLocalIVars;
- (void)_addCachedExternalValues:(id)arg1;
- (void)_addCachedPropertyValues:(id)arg1;
- (void)_setDirtyCachedExternalProperties:(id)arg1;
- (void)_setDirtyCachedProperties:(id)arg1;
- (void)_getValues:(id *)arg1 forProperties:(const id *)arg2 count:(unsigned long long)arg3 message:(long long)arg4;
- (void)getValues:(id *)arg1 forExternalProperties:(const id *)arg2 count:(unsigned long long)arg3;
- (void)__addCachedExternalValues:(id)arg1;
- (void)__addCachedPropertyValues:(id)arg1;
- (void)resetCachedProperties:(const id *)arg1 count:(unsigned long long)arg2;

@end
