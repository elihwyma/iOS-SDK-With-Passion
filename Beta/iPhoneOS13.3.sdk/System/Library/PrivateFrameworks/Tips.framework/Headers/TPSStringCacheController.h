/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Tips/TPSDataCacheController.h>

@interface TPSStringCacheController : TPSDataCacheController

+ (id)sharedInstance;

- (void)commonInit;
- (id)formattedDataWithFileURL:(id)arg1;
- (id)formattedDataWithData:(id)arg1;
- (_Bool)isURLValid:(id)arg1;
- (id)newDataCache;
- (void)formattedDataWithFileURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
