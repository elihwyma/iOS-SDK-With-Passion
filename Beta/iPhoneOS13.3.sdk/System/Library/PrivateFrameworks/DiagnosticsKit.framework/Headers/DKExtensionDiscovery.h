/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

#import <Foundation/NSObject.h>

@class NSCondition, NSSet, NSString;

@protocol DKExtensionRegistry, OS_dispatch_queue;

@interface DKExtensionDiscovery : NSObject

{
    _Bool _discoveryComplete;
    id <DKExtensionRegistry> _registry;
    struct NSString *_bundleIdentifier;
    NSObject<OS_dispatch_queue> *_discoveryQueue;
    NSCondition *_discoveryLock;
    NSSet *_services;
}

@property (retain, nonatomic) id <DKExtensionRegistry> registry;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *discoveryQueue;
@property (retain, nonatomic) NSCondition *discoveryLock;
@property (nonatomic) _Bool discoveryComplete;
@property (retain, nonatomic) NSSet *services;

+ (id)discoveryUsingExtensionRegistry:(id)arg1 services:(id)arg2 bundleIdentifier:(struct NSString *)arg3;

- (void)waitUntilComplete;
- (void)_beginExtensionDiscovery;
- (id)initWithExtensionRegistry:(id)arg1 services:(id)arg2 bundleIdentifier:(struct NSString *)arg3;
- (void)_registerExtensions:(id)arg1 error:(id)arg2;

@end
