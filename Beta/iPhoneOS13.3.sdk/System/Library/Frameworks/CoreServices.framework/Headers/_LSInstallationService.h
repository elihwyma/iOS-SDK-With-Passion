/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _LSInstallationService : NSObject

{
    NSObject<OS_dispatch_queue> *_databaseQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (readonly) NSObject<OS_dispatch_queue> *databaseQueue;
@property (readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)serviceQueue;
+ (void)beginListening;

- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)initWithQueue:(id)arg1;

@end
