/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <AVFoundation/AVURLAsset.h>

@class NSData, NSString;

@interface VCPInMemoryAVAsset : AVURLAsset

{
    NSData *_data;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)assetWithData:(id)arg1;

- (id)initWithData:(id)arg1;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;

@end
