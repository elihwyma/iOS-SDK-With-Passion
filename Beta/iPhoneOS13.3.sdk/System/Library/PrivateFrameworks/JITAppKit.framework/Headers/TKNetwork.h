/*
 Image: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
 */

#import <NSObject.h>

@interface TKNetwork : NSObject

{
    double _timeoutInterval;
}

@property (nonatomic, readonly) double timeoutInterval;

+ (id)shared;
+ (void)setShared:(id)arg1;

- (void)updateNetworkActivity:(long long)arg1;
- (id)loadRequest:(id)arg1 priority:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)downloadRequest:(id)arg1 priority:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)downloadImage:(id)arg1 priority:(long long)arg2 completion:(CDUnknownBlockType)arg3;

@end
