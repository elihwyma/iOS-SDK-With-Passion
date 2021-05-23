/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString, NSURL, SiriCoreConnectionType;

@interface SiriCoreAceConnectionAnalysisInfo : NSObject

{
    _Bool _wwanPreferred;
    int _interfaceIndex;
    NSURL *_connectionURL;
    NSNumber *_sendBufferSize;
    SiriCoreConnectionType *_connectionType;
    NSString *_policyId;
}

@property (nonatomic, readonly) NSURL *connectionURL;
@property (nonatomic, readonly) int interfaceIndex;
@property (copy, nonatomic, readonly) NSNumber *sendBufferSize;
@property (nonatomic, readonly) _Bool wwanPreferred;
@property (nonatomic, readonly) SiriCoreConnectionType *connectionType;
@property (copy, nonatomic) NSString *policyId;

- (id)initWithConnectionURL:(id)arg1 interfaceIndex:(int)arg2 sendBufferSize:(id)arg3 wwanPreferred:(_Bool)arg4 connectionType:(id)arg5 policyId:(id)arg6;

@end
