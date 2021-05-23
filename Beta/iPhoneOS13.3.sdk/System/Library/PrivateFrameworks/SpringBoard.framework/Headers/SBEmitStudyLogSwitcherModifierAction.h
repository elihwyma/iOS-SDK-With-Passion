/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifierAction.h>

@class NSDictionary, NSString;

@interface SBEmitStudyLogSwitcherModifierAction : SBSwitcherModifierAction

{
    NSString *_name;
    NSDictionary *_payload;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSDictionary *payload;

- (long long)type;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithStudyLogWithName:(id)arg1 payload:(id)arg2;

@end
