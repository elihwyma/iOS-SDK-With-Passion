/*
 Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

#import <AppleServiceToolkit/Swift-Protocol.h>

@class ASTIdentity;

@protocol ASTConnectionManagerDelegate;

@protocol ASTConnectionManager <Swift>

@property (weak, nonatomic) id <ASTConnectionManagerDelegate> delegate;
@property (retain, nonatomic) ASTIdentity *identity;

- (unsigned short)postSessionExistsForIdentities:ticket:timeout:allowsCellularAccess:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)postEnrollAllowingCellularAccess: /* Error: Ran out of types for this method. */;
- (unsigned short)postRequest:allowsCellularAccess: /* Error: Ran out of types for this method. */;
- (unsigned short)postAuthInfo:allowsCellularAccess: /* Error: Ran out of types for this method. */;
- (unsigned short)postProfile:allowsCellularAccess: /* Error: Ran out of types for this method. */;
- (unsigned short)postSealableFile:fileSequence:totalFiles:testId:dataId:allowsCellularAccess:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)postTestResult:allowsCellularAccess:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelAllTestResults;
- (unsigned short)downloadAsset:destinationFileHandle:allowsCellularAccess:completion: /* Error: Ran out of types for this method. */;

@end
