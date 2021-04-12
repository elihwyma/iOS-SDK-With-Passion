//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MIME/MFDataConsumer-Protocol.h>

@class NSArray, NSMutableArray;

@interface MFBaseFilterDataConsumer : NSObject <MFDataConsumer>
{
    NSMutableArray *_consumers;
    BOOL _serialAppend;
}

+ (id)filterWithConsumer:(id)arg1;
+ (id)filterWithConsumers:(id)arg1;
@property(readonly, nonatomic) NSArray *consumers; // @synthesize consumers=_consumers;
@property(nonatomic, getter=isSerialAppend) BOOL serialAppend; // @synthesize serialAppend=_serialAppend;
// - (void).cxx_destruct;
- (void)done;
- (long long)appendData:(id)arg1;
- (id)initWithConsumer:(id)arg1;
- (id)initWithConsumers:(id)arg1;

@end

