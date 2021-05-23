/*
 Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface PKExtensionProvider : NSObject

{
    _Bool _didReceiveExtensions;
    id _matchingContext;
    NSDictionary *_extensions;
    NSDictionary *_passKitExtensions;
    NSObject<OS_dispatch_queue> *_extensionQueue;
    NSObject<OS_dispatch_semaphore> *_extensionSema;
}

@property (retain, nonatomic) id matchingContext;
@property (retain, nonatomic) NSDictionary *extensions;
@property (retain, nonatomic) NSDictionary *passKitExtensions;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *extensionQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *extensionSema;
@property (nonatomic) _Bool didReceiveExtensions;
@property (nonatomic, readonly) NSArray *allExtensions;

+ (id)sharedProvider;

- (id)init;
- (void)dealloc;
- (id)_extensionWithIdentifier:(id)arg1;
- (void)beginMatchingExtensions;
- (void)_beginRemoteViewControllerExtensionServiceWithExtension:(id)arg1 inputItems:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)endMatchingExtensions;
- (id)extensionWithIdentifier:(id)arg1;
- (void)_receivedExtensions:(id)arg1;
- (void)extensionWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_beginExtensionRequestWithExtension:(id)arg1 inputItems:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
