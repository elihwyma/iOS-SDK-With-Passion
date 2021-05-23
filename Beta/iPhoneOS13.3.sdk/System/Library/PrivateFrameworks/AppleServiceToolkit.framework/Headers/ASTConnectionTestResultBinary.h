/*
 Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

#import <AppleServiceToolkit/ASTMaterializedConnection.h>

@class ASTSealableFile, NSMutableURLRequest, NSNumber, NSString, NSURL;

@protocol ASTConnectionStatusDelegate;

@interface ASTConnectionTestResultBinary : ASTMaterializedConnection

{
    NSNumber *_testId;
    NSURL *_fileSteamLocationURL;
    ASTSealableFile *_sealableFile;
    NSString *_dataId;
}

@property (retain, nonatomic) ASTSealableFile *sealableFile;
@property (retain, nonatomic) NSString *dataId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) CDUnknownBlockType didReceiveResponse;
@property (nonatomic, readonly) NSMutableURLRequest *request;
@property (weak, nonatomic) id <ASTConnectionStatusDelegate> delegate;
@property (nonatomic) long long state;
@property (nonatomic) long long networkDisconnectedRetryCount;
@property (nonatomic) _Bool retryOnNetworkDisconnected;
@property (nonatomic, readonly) unsigned long long rootOfTrust;
@property (nonatomic, readonly) NSURL *fileSteamLocationURL;
@property (nonatomic, readonly) NSNumber *testId;

- (id)endpoint;
- (id)contentType;
- (id)initWithSealableFile:(id)arg1 fileSequence:(id)arg2 totalFiles:(id)arg3 testId:(id)arg4 dataId:(id)arg5;

@end
