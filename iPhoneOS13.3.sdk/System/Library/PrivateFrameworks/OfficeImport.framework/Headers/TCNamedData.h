//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface TCNamedData : NSObject
{
    NSData *mData;
    NSString *mName;
}

+ (id)namedDataWithData:(id)arg1 named:(id)arg2;
@property(readonly, nonatomic) NSString *name; // @synthesize name=mName;
@property(readonly, nonatomic) NSData *data; // @synthesize data=mData;
// - (void).cxx_destruct;
- (id)initWithData:(id)arg1 named:(id)arg2;

@end

