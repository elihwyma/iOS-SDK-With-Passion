/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray;

@protocol CLSContextProviderServiceFinderDelegate, OS_dispatch_queue;

@interface CLSContextProviderServiceFinder : NSObject

{
    id <CLSContextProviderServiceFinderDelegate> _delegate;
    id _extensionsFinderContext;
    NSObject<OS_dispatch_queue> *_servicesQueue;
    NSDictionary *_extensionAttributes;
    NSMutableArray *_mutableAvailableServices;
}

@property (copy, nonatomic, readonly) NSArray *availableServices;

- (id)init;
- (void)stop;
- (void)start;
- (id)initWithDelegate:(id)arg1;

@end
