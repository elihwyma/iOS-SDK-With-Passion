/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBWorkspaceEntity.h>

@interface SBPreviousWorkspaceEntity : SBWorkspaceEntity

{
    long long _previousLayoutRole;
}

@property (nonatomic, readonly) long long previousLayoutRole;

+ (id)entityWithPreviousLayoutRole:(long long)arg1;

- (_Bool)isPreviousWorkspaceEntity;
- (id)initWithIdentifier:(id)arg1 displayChangeSettings:(id)arg2;
- (id)initWithPreviousLayoutRole:(long long)arg1;

@end
