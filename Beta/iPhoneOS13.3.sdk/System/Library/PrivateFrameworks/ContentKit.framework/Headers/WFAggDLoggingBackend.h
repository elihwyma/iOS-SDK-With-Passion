/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface WFAggDLoggingBackend : NSObject

{
    NSObject<OS_os_log> *_log;
    NSArray *_prefixComponents;
    NSDictionary *_prefixKeyMapping;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)logEvent:(id)arg1 withProperties:(id)arg2;

@end
