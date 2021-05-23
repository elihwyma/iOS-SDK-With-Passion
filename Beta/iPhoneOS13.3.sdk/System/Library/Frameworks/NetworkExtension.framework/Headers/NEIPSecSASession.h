/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@protocol NEIPSecSASessionDelegate, OS_dispatch_queue;

@interface NEIPSecSASession : NSObject

{
    NSString *_name;
    NSObject<NEIPSecSASessionDelegate> *_delegate;
    NSMutableArray *_securityAssociations;
    NSMutableArray *_larvalSAs;
    unsigned long long _uniqueIndex;
    NSObject<OS_dispatch_queue> *_internalDelegateQueue;
}

@property (retain) NSMutableArray *securityAssociations;
@property (retain) NSMutableArray *larvalSAs;
@property (nonatomic) unsigned long long uniqueIndex;
@property (retain) NSString *name;
@property (retain) NSObject<OS_dispatch_queue> *internalDelegateQueue;
@property (weak) NSObject<NEIPSecSASessionDelegate> *delegate;
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (id)initWithName:(id)arg1 delegate:(id)arg2;
- (id)copyEmptySASession;
- (_Bool)addLarvalSA:(id)arg1;
- (_Bool)addSA:(id)arg1;
- (_Bool)updateSA:(id)arg1;
- (void)startIdleTimeout:(unsigned int)arg1 incomingSA:(id)arg2 outgoingSA:(id)arg3;
- (void)startBlackholeDetection:(unsigned int)arg1 incomingSA:(id)arg2 outgoingSA:(id)arg3;
- (_Bool)migrateSA:(id)arg1;
- (_Bool)removeSA:(id)arg1;
- (void)removeAllSAs;

@end
