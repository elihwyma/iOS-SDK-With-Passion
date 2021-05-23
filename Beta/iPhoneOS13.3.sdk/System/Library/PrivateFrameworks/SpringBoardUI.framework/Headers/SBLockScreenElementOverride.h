/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBLockScreenElementOverride : NSObject

{
    _Bool _hidden;
    long long _element;
    NSString *_text;
}

@property (nonatomic) long long element;
@property (nonatomic, getter=isHidden) _Bool hidden;
@property (copy, nonatomic) NSString *text;

+ (id)overrideForElement:(long long)arg1;
+ (id)overrideForHiddenElement:(long long)arg1;

- (id)description;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;

@end
