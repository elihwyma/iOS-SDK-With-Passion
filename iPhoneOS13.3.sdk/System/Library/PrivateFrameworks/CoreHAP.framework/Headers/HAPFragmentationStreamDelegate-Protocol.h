//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HAPFragmentationStream, NSData, NSError;

@protocol HAPFragmentationStreamDelegate <NSObject>
- (void)fragmentationStream:(HAPFragmentationStream *)arg1 didReceiveData:(NSData *)arg2 transactionIdentifier:(unsigned short)arg3 error:(NSError *)arg4;
- (void)fragmentationStream:(HAPFragmentationStream *)arg1 didCloseWithError:(NSError *)arg2;
@end

