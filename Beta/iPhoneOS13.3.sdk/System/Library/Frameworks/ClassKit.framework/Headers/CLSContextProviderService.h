/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

#import <Foundation/NSObject.h>

@class CLSContextProviderExtensionContext, CLSContextProviderExtensionHostContext, NSArray, NSExtension, NSString, NSUUID;

@protocol OS_dispatch_queue;

@interface CLSContextProviderService : NSObject

{
    NSObject<OS_dispatch_queue> *_serviceConnectionQueue;
    NSExtension *_extension;
    NSUUID *_sessionUUID;
    CLSContextProviderExtensionHostContext *_extensionHostContext;
    CLSContextProviderExtensionContext *_extensionContext;
    NSArray *_mainAppContextPath;
    _Atomic int _connectionCount;
    NSString *_extensionIdentifier;
    NSString *_appIdentifier;
    NSString *_appName;
    NSString *_localizedAppName;
}

@property (nonatomic, readonly) NSString *extensionIdentifier;
@property (nonatomic, readonly) NSString *appIdentifier;
@property (nonatomic, readonly) NSString *appName;
@property (nonatomic, readonly) NSString *localizedAppName;

- (id)init;
- (id)description;
- (void)disconnect;
- (void)connectWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithExtension:(id)arg1;
- (void)getMainAppContextPathWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateDescendantsOfContextPath:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
