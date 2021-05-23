/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SKUITransientAppDataStorage : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_storage;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain, nonatomic) NSMutableDictionary *storage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (unsigned long long)count;
- (void)clear;
- (id)keyAtIndex:(unsigned long long)arg1;
- (unsigned long long)setData:(id)arg1 forKey:(id)arg2;
- (void)removeDataForKey:(id)arg1;
- (id)getDataForKey:(id)arg1;

@end
