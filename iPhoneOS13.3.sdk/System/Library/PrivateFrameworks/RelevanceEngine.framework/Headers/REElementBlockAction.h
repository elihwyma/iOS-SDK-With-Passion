//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REElementAction.h>

@interface REElementBlockAction : REElementAction
{
    id /* CDUnknownBlockType */ _action;
}

@property(readonly, nonatomic) id /* CDUnknownBlockType */ action; // @synthesize action=_action;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)_performWithContext:(id)arg1;
- (id)initWithAction:(id /* CDUnknownBlockType */)arg1;

@end
