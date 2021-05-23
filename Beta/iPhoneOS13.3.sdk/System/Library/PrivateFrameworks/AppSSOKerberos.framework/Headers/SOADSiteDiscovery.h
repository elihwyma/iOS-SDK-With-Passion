/*
 Image: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue, NSString;

@interface SOADSiteDiscovery : NSObject

{
    NSString *_realm;
    NSOperationQueue *_queue;
}

@property (retain, nonatomic) NSString *realm;
@property (retain, nonatomic) NSOperationQueue *queue;

- (id)initWithRealm:(id)arg1;
- (void)discoverADInfoUsingSourceAppBundleIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end
