//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/IKAppContextDelegate-Protocol.h>

@class IKAppContext, NSURL;

@protocol IKAppContextDelegatePrivate <IKAppContextDelegate>

@optional
- (void)appContext:(IKAppContext *)arg1 scriptForURL:(NSURL *)arg2 cachePolicy:(NSUInteger)arg3 completion:(void (^)(NSString *, NSError *, NSUInteger))arg4;
@end

