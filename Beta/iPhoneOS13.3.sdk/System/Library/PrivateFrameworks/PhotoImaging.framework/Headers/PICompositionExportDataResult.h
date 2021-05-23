/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <PhotoImaging/PICompositionExportResult.h>

@class NSData;

@interface PICompositionExportDataResult : PICompositionExportResult

{
    NSData *_data;
}

@property (retain) NSData *data;

@end
