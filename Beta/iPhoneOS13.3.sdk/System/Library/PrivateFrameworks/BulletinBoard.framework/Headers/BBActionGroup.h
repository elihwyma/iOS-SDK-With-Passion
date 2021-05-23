/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <BulletinBoard/BBAction.h>

@class NSArray;

@interface BBActionGroup : BBAction

{
    NSArray *_actions;
}

@property (copy, nonatomic) NSArray *actions;

+ (id)actionGroupWithActions:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)replacementObjectForCoder:(id)arg1;
- (id)awakeAfterUsingCoder:(id)arg1;

@end
