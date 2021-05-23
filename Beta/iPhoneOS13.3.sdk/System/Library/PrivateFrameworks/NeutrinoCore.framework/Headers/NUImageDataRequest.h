/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUImageRenderRequest.h>

@class NSDictionary, NSString;

@interface NUImageDataRequest : NUImageRenderRequest

{
    NSString *_dataExtractor;
    NSDictionary *_options;
}

@property (copy) NSString *dataExtractor;
@property (copy) NSDictionary *options;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequest:(id)arg1;
- (id)initWithComposition:(id)arg1;
- (void)submit:(CDUnknownBlockType)arg1;
- (id)newRenderJob;
- (id)initWithComposition:(id)arg1 dataExtractor:(id)arg2 options:(id)arg3;
- (id)initWithRequest:(id)arg1 dataExtractor:(id)arg2 options:(id)arg3;

@end
