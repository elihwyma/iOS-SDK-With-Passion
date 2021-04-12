//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/JSExport-Protocol.h>

@class JSValue;

@protocol IKJSDataSource <JSExport>
@property(readonly, nonatomic) long long segmentSize;
@property(readonly, nonatomic) long long length;
- (void)move:(long long)arg1:(long long)arg2:(long long)arg3:(JSValue *)arg4;
- (JSValue *)replace:(long long)arg1:(JSValue *)arg2;
- (JSValue *)delete:(long long)arg1:(long long)arg2;
- (void)insert:(long long)arg1:(JSValue *)arg2:(JSValue *)arg3;
- (void)update:(JSValue *)arg1:(JSValue *)arg2:(long long)arg3;
- (JSValue *)item:(long long)arg1;
- (id)initConstructor:(JSValue *)arg1:(JSValue *)arg2:(long long)arg3;
@end

