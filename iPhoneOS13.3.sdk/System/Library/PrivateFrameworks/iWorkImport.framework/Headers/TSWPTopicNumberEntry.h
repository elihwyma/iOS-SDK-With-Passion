//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface TSWPTopicNumberEntry : NSObject <NSCopying>
{
    NSUInteger _charIndex;
    NSUInteger _number;
}

@property(readonly, nonatomic) NSUInteger number; // @synthesize number=_number;
@property(nonatomic) NSUInteger charIndex; // @synthesize charIndex=_charIndex;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithNumber:(NSUInteger)arg1 charIndex:(NSUInteger)arg2;
- (id)init;

@end
