/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

@interface GKSupplementaryViewFactory : NSObject

{
    id _target;
    Class _reusableViewClass;
    SEL _configurator;
    SEL _selector;
}

@property (nonatomic) id target;
@property (nonatomic) SEL selector;
@property (retain, nonatomic) Class reusableViewClass;
@property (nonatomic, readonly) SEL configurator;

+ (id)factoryForClass:(Class)arg1 target:(id)arg2 configurator:(SEL)arg3;
+ (id)factoryForClass:(Class)arg1 target:(id)arg2 configurator:(SEL)arg3 userData:(id)arg4;

- (void)dealloc;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)initWithClass:(Class)arg1 target:(id)arg2 configurator:(SEL)arg3 userData:(id)arg4;

@end
