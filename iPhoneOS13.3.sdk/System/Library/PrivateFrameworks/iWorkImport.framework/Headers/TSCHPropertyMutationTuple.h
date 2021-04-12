//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol TSCHStyleOwning;

__attribute__((visibility("hidden")))
@interface TSCHPropertyMutationTuple : NSObject
{
    id <TSCHStyleOwning> mStyleOwner;
    NSDictionary *mMutations;
}

@property(readonly) NSDictionary *mutations; // @synthesize mutations=mMutations;
@property(readonly) id <TSCHStyleOwning> styleOwner; // @synthesize styleOwner=mStyleOwner;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithStyleOwner:(id)arg1 mutationMap:(id)arg2;
- (id)initWithStyleOwner:(id)arg1 mutations:(id)arg2;
- (id)styleOwnerRef;
- (id)indirectTuple;

@end

