//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface SGDWorkQueueName : NSObject <NSCopying>
{
    unsigned int _timestamp32;
    unsigned int _counter32;
    unsigned short _otherbits;
}

+ (BOOL)isValidFilename:(id)arg1;
- (id)queueItemId;
- (id)description;
- (id)copyWithState:(NSUInteger)arg1 andFails:(NSUInteger)arg2;
- (id)copyWithState:(NSUInteger)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)pathInDirectory:(id)arg1;
- (id)initWithPath:(id)arg1;
@property(nonatomic) NSUInteger state;
@property(nonatomic) NSUInteger fails;
@property(nonatomic) NSUInteger counter;
@property(nonatomic) NSUInteger timestamp;

@end

