/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface PXFeedLayoutGeneratorScanState : NSObject

{
    _Bool _scannedBatchHasCaption;
    long long _scanLocation;
    id _scannedBatchID;
    long long _scanSpecialSequenceCount;
}

@property (nonatomic) long long scanLocation;
@property (retain, nonatomic) id scannedBatchID;
@property (nonatomic) _Bool scannedBatchHasCaption;
@property (nonatomic) long long scanSpecialSequenceCount;

@end
