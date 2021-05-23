/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <UIKit/_UILegibilitySettings.h>

@class NSString;

@interface _UILegibilitySettings (SpringBoard)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (_Bool)sb_isEqualToLegibilitySettings:(id)arg1;
- (id)sb_styleString;
- (id)sb_description;
- (id)sb_copy;

@end
