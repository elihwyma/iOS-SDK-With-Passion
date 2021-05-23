/*
 Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

#import <Foundation/NSObject.h>

@interface NSPControlConnection : NSObject

{
    unsigned long long _flowIdentifier;
}

@property (readonly) unsigned long long flowIdentifier;

- (id)initFromMetadata:(id)arg1;
- (id)initFromStream:(id)arg1;
- (id)initFromTask:(id)arg1;
- (id)initFromConnection:(id)arg1;
- (id)initFromNWConnection:(id)arg1;
- (void)fetchConnectionInfoWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
