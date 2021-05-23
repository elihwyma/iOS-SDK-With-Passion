/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface WFStorageServiceRegistry : NSObject

{
    NSArray *_registeredServices;
}

@property (nonatomic, readonly) NSArray *registeredServices;
@property (nonatomic, readonly) NSArray *storageServices;

+ (id)sharedRegistry;
+ (void)registerStorageServiceClass:(Class)arg1;
+ (void)registerAllActionKitStorageServiceClasses;

- (id)init;
- (id)storageServiceWithName:(id)arg1;

@end
