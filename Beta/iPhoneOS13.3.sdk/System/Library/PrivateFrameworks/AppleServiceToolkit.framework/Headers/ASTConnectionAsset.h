/*
 Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

#import <AppleServiceToolkit/ASTMaterializedConnection.h>

@class NSFileHandle, NSMutableURLRequest, NSString;

@protocol ASTConnectionStatusDelegate;

@interface ASTConnectionAsset : ASTMaterializedConnection

{
    CDUnknownBlockType _didDownloadFile;
    NSFileHandle *_destinationFileHandle;
    NSString *_assetName;
}

@property (retain, nonatomic) NSString *assetName;
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
@property (copy, nonatomic) CDUnknownBlockType didDownloadFile;
@property (nonatomic, readonly) NSFileHandle *destinationFileHandle;

- (id)endpoint;
- (id)method;
- (id)accept;
- (id)initWithAssetName:(id)arg1 destinationFileHandle:(id)arg2;

@end
