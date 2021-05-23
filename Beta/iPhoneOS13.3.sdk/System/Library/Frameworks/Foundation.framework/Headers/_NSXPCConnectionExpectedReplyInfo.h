/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSBlock, NSDictionary, NSXPCInterface;

__attribute__((visibility("hidden")))
@interface _NSXPCConnectionExpectedReplyInfo : NSObject

{
    NSBlock *_replyBlock;
    CDUnknownBlockType _errorBlock;
    CDUnknownBlockType _cleanupBlock;
    SEL _selector;
    NSXPCInterface *_interface;
    NSDictionary *_userInfo;
    unsigned long long _proxyNumber;
}

@property SEL selector;
@property (copy) NSBlock *replyBlock;
@property (copy) CDUnknownBlockType errorBlock;
@property (copy) CDUnknownBlockType cleanupBlock;
@property (retain) NSXPCInterface *interface;
@property (retain) NSDictionary *userInfo;
@property unsigned long long proxyNumber;

- (void)dealloc;

@end
