/*
 Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

#import <Foundation/NSObject.h>

@class ASTIdentity, ASTNetworking, NSString;

@protocol ASTConnectionManagerDelegate;

@interface ASTMaterializedConnectionManager : NSObject

{
    id <ASTConnectionManagerDelegate> _delegate;
    ASTIdentity *_identity;
    ASTNetworking *_networking;
    NSString *_sessionId;
}

@property (retain, nonatomic) ASTNetworking *networking;
@property (retain, nonatomic) NSString *sessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <ASTConnectionManagerDelegate> delegate;
@property (retain, nonatomic) ASTIdentity *identity;

- (id)init;
- (void)dealloc;
- (id)initWithSOCKSProxyServer:(id)arg1 port:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpected:(long long)arg4;
- (void)connection:(id)arg1 connectionStateChanged:(long long)arg2;
- (void)postSessionExistsForIdentities:(id)arg1 ticket:(id)arg2 timeout:(double)arg3 allowsCellularAccess:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (id)postEnrollAllowingCellularAccess:(_Bool)arg1;
- (id)postRequest:(id)arg1 allowsCellularAccess:(_Bool)arg2;
- (_Bool)postAuthInfo:(id)arg1 allowsCellularAccess:(_Bool)arg2;
- (_Bool)postProfile:(id)arg1 allowsCellularAccess:(_Bool)arg2;
- (void)postSealableFile:(id)arg1 fileSequence:(id)arg2 totalFiles:(id)arg3 testId:(id)arg4 dataId:(id)arg5 allowsCellularAccess:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (void)postTestResult:(id)arg1 allowsCellularAccess:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cancelAllTestResults;
- (void)downloadAsset:(id)arg1 destinationFileHandle:(id)arg2 allowsCellularAccess:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;

@end
