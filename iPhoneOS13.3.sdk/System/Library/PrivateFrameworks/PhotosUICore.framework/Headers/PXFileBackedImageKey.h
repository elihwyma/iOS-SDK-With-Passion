//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface PXFileBackedImageKey : NSObject
{
    NSURL *_url;
    CGSize _size;
}

@property(readonly, nonatomic) CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithUrl:(id)arg1 size:(CGSize)arg2;

@end

