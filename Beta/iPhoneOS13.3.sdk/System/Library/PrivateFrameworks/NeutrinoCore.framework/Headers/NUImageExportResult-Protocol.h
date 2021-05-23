/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/Swift-Protocol.h>

@class NSData, NSURL;

@protocol NUImageExportResult <Swift>

@property (readonly) NSURL *destinationURL;
@property (readonly) NSData *destinationData;

@end
