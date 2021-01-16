//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDictionary.h>

@class NSOrderedSet;

@interface WFOrderedDictionary : NSDictionary
{
    NSOrderedSet *_keys;
    NSDictionary *_dictionary;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(readonly, nonatomic) NSOrderedSet *keys; // @synthesize keys=_keys;
// - (void).cxx_destruct;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)allKeys;
- (id)initWithObjects:(const id )arg1 forKeys:(const id )arg2 count:(NSUInteger)arg3;
- (id)init;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (NSUInteger)count;
- (id)initWithQueryItems:(id)arg1;

@end
