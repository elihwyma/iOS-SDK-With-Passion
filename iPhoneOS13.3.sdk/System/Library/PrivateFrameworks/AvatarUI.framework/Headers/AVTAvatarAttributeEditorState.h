//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AVTAvatarAttributeEditorState : NSObject
{
    NSMutableDictionary *_pairedStates;
}

+ (id)buildStateFromCoreModel:(id)arg1 avatarConfiguration:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *pairedStates; // @synthesize pairedStates=_pairedStates;
// - (void).cxx_destruct;
- (void)setCategory:(long long)arg1 inPairedState:(BOOL)arg2;
- (BOOL)isCategoryPaired:(long long)arg1;
- (id)initWithPairedStates:(id)arg1;
- (id)init;

@end

