//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface _SYInputDataItem : NSObject
{
//     struct os_unfair_lock_s _lock;
    NSUInteger _length;
    NSMutableData *_data;
    id /* CDUnknownBlockType */ _callback;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ callback; // @synthesize callback=_callback;
@property(readonly, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(nonatomic) NSUInteger length; // @synthesize length=_length;
// @property(nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSUInteger lengthRemaining;
- (id)initWithLength:(NSUInteger)arg1 callback:(id /* CDUnknownBlockType */)arg2;

@end

