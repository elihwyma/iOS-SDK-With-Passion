/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSCoreDataXPCMessage, NSDictionary, NSError, NSXPCStore;

__attribute__((visibility("hidden")))
@interface NSXPCStoreMessageContext : NSObject

{
    NSXPCStore *_store;
    NSCoreDataXPCMessage *_message;
    NSDictionary *_result;
    NSError *_error;
}

@property (nonatomic, readonly) NSCoreDataXPCMessage *message;
@property (nonatomic, readonly) NSXPCStore *store;
@property (retain, nonatomic) NSDictionary *result;
@property (retain, nonatomic) NSError *error;

- (void)dealloc;
- (id)initForMessage:(id)arg1 store:(id)arg2;

@end
