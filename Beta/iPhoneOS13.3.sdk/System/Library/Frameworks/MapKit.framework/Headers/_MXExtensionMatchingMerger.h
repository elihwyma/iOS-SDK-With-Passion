/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSArray;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _MXExtensionMatchingMerger : NSObject

{
    NSObject<OS_dispatch_queue> *_lock;
    NSArray *_mapExtensions;
    NSArray *_intentNonUIExtensions;
    NSArray *_intentUIExtensions;
}

- (id)init;
- (id)receiveExtensions:(id)arg1 withIndex:(unsigned long long)arg2;
- (void)clearExtensions;

@end
