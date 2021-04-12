//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSItemProvider, NSString;

@interface WebItemProviderRegistrationInfoList : NSObject
{
    struct RetainPtr<NSMutableArray> _representations;
    NSString *_suggestedName;
    long long _preferredPresentationStyle;
    NSData *_teamData;
    CGSize _preferredPresentationSize;
}

@property(copy, nonatomic) NSData *teamData; // @synthesize teamData=_teamData;
@property(nonatomic) long long preferredPresentationStyle; // @synthesize preferredPresentationStyle=_preferredPresentationStyle;
@property(copy, nonatomic) NSString *suggestedName; // @synthesize suggestedName=_suggestedName;
@property(nonatomic) CGSize preferredPresentationSize; // @synthesize preferredPresentationSize=_preferredPresentationSize;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSItemProvider *itemProvider;
- (void)enumerateItems:(id /* CDUnknownBlockType */)arg1;
- (id)itemAtIndex:(NSUInteger)arg1;
- (NSUInteger)numberOfItems;
- (void)addPromisedType:(id)arg1 fileCallback:(id /* CDUnknownBlockType */)arg2;
- (void)addRepresentingObject:(id)arg1;
- (void)addData:(id)arg1 forType:(id)arg2;
- (void)dealloc;
- (id)init;

@end

