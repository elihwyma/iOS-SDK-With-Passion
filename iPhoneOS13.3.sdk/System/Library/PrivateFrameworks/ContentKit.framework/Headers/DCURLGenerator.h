//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface DCURLGenerator : NSObject
{
}

@property(readonly, nonatomic) NSString *query;
@property(readonly, nonatomic) NSString *path;
@property(readonly, nonatomic) NSString *host;
@property(readonly, nonatomic) NSString *scheme;
- (id)URL;

@end

