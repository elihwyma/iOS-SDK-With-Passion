/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKJSObject.h>

@class NSMutableDictionary, NSObject;

@protocol IKAppDataStoring, OS_dispatch_queue;

@interface IKJSStorage : IKJSObject

{
    struct {
        _Bool usesExternalDataStore;
        _Bool externalStorageHasDictionaryRepresentation;
    } _flags;
    id <IKAppDataStoring> _appStorage;
    NSMutableDictionary *_storageDict;
    NSObject<OS_dispatch_queue> *_storageQueue;
}

@property (retain, nonatomic) NSMutableDictionary *storageDict;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *storageQueue;
@property (weak, nonatomic, readonly) id <IKAppDataStoring> appStorage;
@property (nonatomic, readonly) unsigned long long length;

- (void)clear;
- (id)getItem:(id)arg1;
- (void)removeItem:(id)arg1;
- (id)initWithAppContext:(id)arg1 appStorage:(id)arg2;
- (void)_verifyExternalDataStoreForKey:(id)arg1;
- (id)key:(unsigned long long)arg1;
- (void)setItem:(id)arg1:(id)arg2;
- (id)keysAndValues;

@end
