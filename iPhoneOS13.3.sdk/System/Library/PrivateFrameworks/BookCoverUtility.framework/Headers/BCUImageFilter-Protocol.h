//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDictionary, NSString;
@protocol BCUOperation;

@protocol BCUImageFilter <NSObject>
@property(readonly, nonatomic) NSString *identifier;
- (id <BCUOperation>)newOperationWithImage:(CGImage )arg1 size:(CGSize)arg2 contentsScale:(double)arg3 priority:(float)arg4 options:(NSDictionary *)arg5 completion:(void (^)(id <BCUOperation>, id <BCUPurgeableImage>, UIEdgeInsets, id))arg6;
@end
