/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSFileAccessNode, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface NSFileReactorProxy : NSObject

{
    NSXPCConnection *_client;
    id _reactorID;
    NSFileAccessNode *_itemLocation;
    unsigned int _effectiveUserIdentifier;
}

@property unsigned int effectiveUserIdentifier;

+ (void)_enumerateParentDirectoriesStartingAtURL:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (id)descriptionWithIndenting:(id)arg1;
- (void)setItemLocation:(id)arg1;
- (id)itemLocation;
- (id)client;
- (id)reactorID;
- (_Bool)allowedForURL:(id)arg1;
- (void)forwardUsingProxy:(id)arg1;
- (void)collectDebuggingInformationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_clientProxy;
- (id)initWithClient:(id)arg1 reactorID:(id)arg2;

@end
