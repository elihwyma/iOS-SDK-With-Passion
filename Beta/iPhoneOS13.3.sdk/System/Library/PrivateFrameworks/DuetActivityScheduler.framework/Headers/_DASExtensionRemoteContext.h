/*
 Image: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
 */

#import <Foundation/NSExtensionContext.h>

@class NSObject, NSString, _DASExtension;

@protocol OS_os_log;

@interface _DASExtensionRemoteContext : NSExtensionContext

{
    NSObject<OS_os_log> *_log;
}

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (readonly) _DASExtension *extension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)extensionRunnerClassWhitelist;

- (id)init;
- (void)suspend;
- (id)hostContextWithError:(id *)arg1;
- (void)performActivity:(id)arg1;
- (id)createExtensionRunnerWithClassName:(id)arg1;

@end
