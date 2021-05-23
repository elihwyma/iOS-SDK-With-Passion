/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSPFileDataStorage.h>

@class NSData, NSURL, TSPObjectContext;

@interface TSPExternalReferenceDataStorage : TSPFileDataStorage

{
    NSURL *_URL;
    NSData *_bookmarkData;
    TSPObjectContext *_context;
}

@property (nonatomic, readonly, getter=isReadable) _Bool readable;

- (id)initWithURL:(id)arg1;
- (id)storageForDataCopyFromOtherContext;
- (void)performReadWithAccessor:(CDUnknownBlockType)arg1;
- (id)initWithBookmarkData:(id)arg1 context:(id)arg2;
- (id)bookmarkDataForArchiver:(id)arg1;

@end
