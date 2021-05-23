/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h>

@class AVStreamDataParser, NSString;

__attribute__((visibility("hidden")))
@interface WebAVStreamDataParserListener : NSObject

{
    WeakPtr_1d7f609b _parent;
    Box_1b51c224 _abortSemaphore;
    AVStreamDataParser *_parser;
}

@property WeakPtr_1d7f609b parent;
@property Box_1b51c224 abortSemaphore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (id).cxx_construct;
- (void)streamDataParser:(id)arg1 didParseStreamDataAsAsset:(id)arg2 withDiscontinuity:(_Bool)arg3;
- (void)streamDataParser:(id)arg1 didFailToParseStreamDataWithError:(id)arg2;
- (void)streamDataParser:(id)arg1 didProvideMediaData:(struct opaqueCMSampleBuffer *)arg2 forTrackID:(int)arg3 mediaType:(id)arg4 flags:(unsigned long long)arg5;
- (void)streamDataParser:(id)arg1 didReachEndOfTrackWithTrackID:(int)arg2 mediaType:(id)arg3;
- (void)streamDataParserWillProvideContentKeyRequestInitializationData:(id)arg1 forTrackID:(int)arg2;
- (void)streamDataParser:(id)arg1 didProvideContentKeyRequestInitializationData:(id)arg2 forTrackID:(int)arg3;
- (id)initWithParser:(id)arg1 parent:(WeakPtr_1d7f609b)arg2;
- (void)streamDataParser:(id)arg1 didParseStreamDataAsAsset:(id)arg2;

@end
