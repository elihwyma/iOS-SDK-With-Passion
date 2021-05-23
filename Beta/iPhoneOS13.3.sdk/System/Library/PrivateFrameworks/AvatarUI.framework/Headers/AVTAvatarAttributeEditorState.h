/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface AVTAvatarAttributeEditorState : NSObject

{
    NSMutableDictionary *_pairedStates;
}

@property (retain, nonatomic) NSMutableDictionary *pairedStates;

+ (id)buildStateFromCoreModel:(id)arg1 avatarConfiguration:(id)arg2;

- (id)init;
- (_Bool)isCategoryPaired:(long long)arg1;
- (void)setCategory:(long long)arg1 inPairedState:(_Bool)arg2;
- (id)initWithPairedStates:(id)arg1;

@end
