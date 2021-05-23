/*
 Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

#import <InstallCoordination/IXOwnedDataPromise.h>

#import <InstallCoordination/Swift-Protocol.h>

@class IXPromisedStreamingZipTransferSeed, NSString, SZExtractor;

@protocol SZExtractorDelegate;

@interface IXPromisedStreamingZipTransfer : IXOwnedDataPromise <Swift>

{
    _Bool _needsConsume;
    id <SZExtractorDelegate> _extractorDelegate;
    SZExtractor *_extractor;
}

@property (retain, nonatomic) IXPromisedStreamingZipTransferSeed *seed;
@property (nonatomic, getter=isComplete) _Bool complete;
@property (nonatomic) unsigned long long archiveBytesConsumed;
@property (retain, nonatomic) SZExtractor *extractor;
@property (nonatomic) _Bool needsConsume;
@property (nonatomic, readonly) _Bool doesConsumeExtractedData;
@property (weak, nonatomic) id <SZExtractorDelegate> extractorDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)supplyBytes:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)finishStreamWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)prepareForExtractionToPath:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)suspendStreamWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)terminateStreamWithError:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithSeed:(id)arg1;
- (Class)seedClass;
- (void)resetWithCompletion:(CDUnknownBlockType)arg1;
- (void)_prepareForExtractionToPath:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)addArchiveBytesConsumed:(unsigned long long)arg1;
- (void)setExtractionProgress:(double)arg1;
- (void)extractionCompleteAtArchivePath:(id)arg1;
- (void)extractionEnteredPassThroughMode;
- (void)prepareForExtraction:(CDUnknownBlockType)arg1;
- (_Bool)consumeExtractedDataIfNeeded;
- (id)initWithName:(id)arg1 client:(unsigned long long)arg2 streamingZipOptions:(id)arg3 archiveSize:(unsigned long long)arg4 diskSpaceNeeded:(unsigned long long)arg5;

@end
