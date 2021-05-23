/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSPersistentStoreDescription, NSURL;

@interface TBCoreDataStoreDescriptor : NSObject

{
    unsigned long long _type;
    NSURL *_storeURL;
    NSURL *_modelURL;
    NSDictionary *_storeOptions;
    NSPersistentStoreDescription *_storeDescription;
}

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSURL *storeURL;
@property (retain, nonatomic) NSURL *modelURL;
@property (retain, nonatomic) NSDictionary *storeOptions;
@property (nonatomic, readonly) NSPersistentStoreDescription *storeDescription;

+ (id)defaultStoresDirectoryURL;
+ (id)defaultPersistentStoreURLWithDirectory:(id)arg1;
+ (id)defaultModelURL;
+ (id)tempStoresDirectoryURL;
+ (id)clientStoreDescriptor;
+ (id)serverStoreDescriptor;
+ (id)directStoreDescriptor;
+ (id)tempStoreDescriptor;

- (id)initWithType:(unsigned long long)arg1 storeURL:(id)arg2 modelURL:(id)arg3;

@end
