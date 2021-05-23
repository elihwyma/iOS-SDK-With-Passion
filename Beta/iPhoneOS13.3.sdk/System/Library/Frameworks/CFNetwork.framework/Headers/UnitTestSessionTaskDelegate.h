/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

#import <CFNetwork/Swift-Protocol.h>

@class NSString;

@interface UnitTestSessionTaskDelegate : NSObject <Swift>

{
    SmartBlockWithArgs_02d865d6 _didFinishCollectingMetricsCompletionBlock;
}

@property (nonatomic) SmartBlockWithArgs_02d865d6 didFinishCollectingMetricsCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id).cxx_construct;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;

@end
