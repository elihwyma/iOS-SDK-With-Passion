/*
 Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

#import <MetricsKit/MTEnvironmentUIKitStoreDelegate.h>

@interface MTConvenienceEnvironmentDelegate : MTEnvironmentUIKitStoreDelegate

{
    CDUnknownBlockType __pageURLBlock;
    CDUnknownBlockType __resourceRevNumBlock;
    CDUnknownBlockType __hostAppBlock;
}

@property (copy, nonatomic) CDUnknownBlockType _pageURLBlock;
@property (copy, nonatomic) CDUnknownBlockType _resourceRevNumBlock;
@property (copy, nonatomic) CDUnknownBlockType _hostAppBlock;

- (id)init;
- (id)hostApp;
- (id)pageUrl;
- (id)resourceRevNum;
- (id)initWithPageURLBlock:(CDUnknownBlockType)arg1 resourceRevNumBlock:(CDUnknownBlockType)arg2 hostAppBlock:(CDUnknownBlockType)arg3;

@end
