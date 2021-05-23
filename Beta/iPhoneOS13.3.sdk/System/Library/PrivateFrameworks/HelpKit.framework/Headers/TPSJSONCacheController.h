/*
 Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

#import <HelpKit/TPSDataCacheController.h>

@interface TPSJSONCacheController : TPSDataCacheController

+ (id)sharedInstance;

- (void)commonInit;
- (id)formattedDataWithFileURL:(id)arg1;
- (id)formattedDataWithData:(id)arg1;
- (_Bool)isURLValid:(id)arg1;
- (id)newDataCache;
- (void)formattedDataWithFileURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
