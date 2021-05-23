/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

#import <CFNetwork/Swift-Protocol.h>

@class NSString, NSURLSessionTaskMetrics;

@interface VaryHeaderSupportTaskDelegate : NSObject <Swift>

{
    NSURLSessionTaskMetrics *_metrics;
}

@property (retain, nonatomic) NSURLSessionTaskMetrics *metrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;

@end
