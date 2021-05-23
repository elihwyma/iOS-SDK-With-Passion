/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@interface NPKTransientPassAssertion : NSObject

{
    _Bool _requestServiceMode;
    _Bool _disableCardSelection;
    NSXPCConnection *_xpcConnection;
    NSString *_uniqueID;
}

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) NSString *uniqueID;
@property (nonatomic) _Bool requestServiceMode;
@property (nonatomic) _Bool disableCardSelection;

- (void)invalidate;
- (id)_remoteObjectProxy;
- (void)_resyncState;
- (id)initWithPassWithUniqueID:(id)arg1;

@end
