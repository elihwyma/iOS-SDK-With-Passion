/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@interface SBIconLayoutOverrideStrategy : NSObject

{
    struct UIEdgeInsets _layoutInsets;
    _Bool _preservesCurrentListOrigin;
}

@property (nonatomic, readonly) struct UIEdgeInsets layoutInsets;
@property (nonatomic, readonly) _Bool preservesCurrentListOrigin;

- (id)initWithLayoutInsets:(struct UIEdgeInsets)arg1 perservingCurrentListOrigin:(_Bool)arg2;

@end
