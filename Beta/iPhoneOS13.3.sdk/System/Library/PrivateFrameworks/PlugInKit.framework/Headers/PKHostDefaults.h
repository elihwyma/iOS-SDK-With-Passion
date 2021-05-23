/*
 Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

#import <Foundation/NSUserDefaults.h>

@class NSObject, PKHostPlugIn;

@protocol OS_dispatch_queue;

@interface PKHostDefaults : NSUserDefaults

{
    PKHostPlugIn *_plugin;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak) PKHostPlugIn *plugin;
@property (retain) NSObject<OS_dispatch_queue> *queue;

- (_Bool)synchronize;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)registerDefaults:(id)arg1;
- (id)initWithPlugIn:(id)arg1;

@end
