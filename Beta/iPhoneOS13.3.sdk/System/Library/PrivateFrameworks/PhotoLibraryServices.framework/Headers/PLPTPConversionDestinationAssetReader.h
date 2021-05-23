/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLPTPAssetReader.h>

@class PHMediaFormatConversionDestination;

@interface PLPTPConversionDestinationAssetReader : PLPTPAssetReader

{
    PHMediaFormatConversionDestination *_destination;
}

@property (retain) PHMediaFormatConversionDestination *destination;

- (id)path;
- (id)initWithDestination:(id)arg1;
- (id)dataSourcePathForDataRange:(struct _NSRange)arg1 error:(id *)arg2;

@end
