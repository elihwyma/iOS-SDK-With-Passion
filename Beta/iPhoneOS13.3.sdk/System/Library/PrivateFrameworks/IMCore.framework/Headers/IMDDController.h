/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface IMDDController : NSObject

{
    NSObject<OS_dispatch_queue> *_scannerQueue;
}

+ (id)sharedInstance;

- (id)init;
- (void)scanMessage:(id)arg1 waitUntilDone:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)scanMessage:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)_scanAttributedStringWithMessage:(id)arg1 attributedString:(id)arg2 plainText:(id)arg3;
- (void)_processLinkInAttributedString:(id)arg1;
- (_Bool)_scanMessageUsingScanner:(id)arg1 attributedString:(id)arg2;
- (struct __DDScanner *)sharedScanner;
- (id)scannerQueue;

@end
