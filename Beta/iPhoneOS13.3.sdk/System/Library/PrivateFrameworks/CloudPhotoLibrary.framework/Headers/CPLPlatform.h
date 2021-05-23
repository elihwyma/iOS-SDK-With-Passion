/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class NSMapTable, NSString;

@protocol OS_dispatch_queue;

@interface CPLPlatform : NSObject

{
    NSMapTable *_abstractClassToImplementation;
    NSObject<OS_dispatch_queue> *_lock;
    NSString *_suffix;
}

@property (copy, nonatomic) NSString *suffix;

+ (id)currentPlatform;
+ (void)setProxyImplementationForPlatform:(id)arg1;
+ (void)setDefaultPlatform:(id)arg1;
+ (id)defaultPlatform;

- (id)init;
- (id)description;
- (void)setPlatformImplementation:(Class)arg1 forClass:(Class)arg2;
- (Class)implementationClassForAbstractClass:(Class)arg1;
- (id)newPlatformImplementationForObject:(id)arg1;

@end
