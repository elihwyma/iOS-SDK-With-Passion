/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@class NSData, NSString, NSURL, NUImageGeometry;

@protocol NURenderStatistics;

@interface _NUImageExportResult

{
    NSData *_destinationData;
}

@property (retain) NSURL *destinationURL;
@property (retain) NSData *destinationData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) id <NURenderStatistics> statistics;
@property (readonly) NUImageGeometry *geometry;

@end
