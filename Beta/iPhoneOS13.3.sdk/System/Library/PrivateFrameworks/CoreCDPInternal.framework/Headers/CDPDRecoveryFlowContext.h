/*
 Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

#import <Foundation/NSObject.h>

@class CDPContext;

@interface CDPDRecoveryFlowContext : NSObject

{
    _Bool _hasPeersForRemoteApproval;
    CDPContext *_context;
}

@property (retain, nonatomic) CDPContext *context;
@property (nonatomic) _Bool hasPeersForRemoteApproval;

@end
