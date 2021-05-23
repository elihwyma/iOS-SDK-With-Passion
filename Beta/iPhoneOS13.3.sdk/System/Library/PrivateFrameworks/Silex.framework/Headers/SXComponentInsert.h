/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@protocol SXComponent><SXInsertableComponent, SXComponentLayout;

@interface SXComponentInsert : NSObject

{
    id <SXComponent><SXInsertableComponent> _component;
    id <SXComponentLayout> _componentLayout;
}

@property (nonatomic, readonly) id <SXComponent><SXInsertableComponent> component;
@property (nonatomic, readonly) id <SXComponentLayout> componentLayout;

- (id)description;
- (id)initWithComponent:(id)arg1 componentLayout:(id)arg2;

@end
