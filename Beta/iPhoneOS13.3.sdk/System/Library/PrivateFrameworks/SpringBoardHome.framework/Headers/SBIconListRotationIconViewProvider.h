/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class SBIconListView;

@interface SBIconListRotationIconViewProvider : NSObject

{
    SBIconListView *_listView;
}

@property (weak, nonatomic, readonly) SBIconListView *listView;

- (id)dequeueReusableIconViewOfClass:(Class)arg1;
- (void)recycleIconView:(id)arg1;
- (_Bool)isIconViewRecycled:(id)arg1;
- (void)configureIconView:(id)arg1 forIcon:(id)arg2;
- (id)initWithListView:(id)arg1;

@end
