//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HelpKit/TPSDataCacheController.h>

@interface TPSStringCacheController : TPSDataCacheController
{
}

+ (id)sharedInstance;
- (void)formattedDataWithFileURL:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (BOOL)isURLValid:(id)arg1;
- (id)formattedDataWithData:(id)arg1;
- (id)formattedDataWithFileURL:(id)arg1;
- (id)newDataCache;
- (void)commonInit;

@end

