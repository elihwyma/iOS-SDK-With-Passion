/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIService.framework/AccessibilityUIService
 */

#import <NSObject.h>

@class NSString;

@protocol OS_xpc_object;

@interface AXUIClientMessenger : NSObject

{
    NSString *_clientIdentifier;
    NSObject<OS_xpc_object> *_connection;
}

@property (copy, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;

+ (id)clientMessengerWithIdentifier:(id)arg1;

- (id)init;
- (id)description;
- (void)sendAsynchronousMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 targetAccessQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)sendAsynchronousMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 targetAccessQueue:(id)arg3 completionRequiresWritingBlock:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (id)sendSynchronousMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithClientIdentifier:(id)arg1 connection:(id)arg2;

@end
