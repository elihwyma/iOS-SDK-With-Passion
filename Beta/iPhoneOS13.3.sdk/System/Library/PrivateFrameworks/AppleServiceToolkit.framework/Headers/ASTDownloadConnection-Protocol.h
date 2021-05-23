/*
 Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

#import <AppleServiceToolkit/Swift-Protocol.h>

@class NSFileHandle;

@protocol ASTDownloadConnection <Swift>

@property (copy, nonatomic) CDUnknownBlockType didDownloadFile;
@property (nonatomic, readonly) NSFileHandle *destinationFileHandle;

@end
