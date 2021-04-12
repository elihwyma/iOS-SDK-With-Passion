//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableArray;

@interface HSCloudItemIDList : NSObject <NSSecureCoding>
{
    NSMutableArray *_itemIDs;
    NSMutableArray *_idTypes;
}

+ (BOOL)supportsSecureCoding;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSUInteger count;
- (void)enumerateCloudItemIDsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)insertCloudItemID:(NSUInteger)arg1 idType:(long long)arg2 atIndex:(NSUInteger)arg3;
- (void)addCloudItemID:(NSUInteger)arg1 idType:(long long)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

