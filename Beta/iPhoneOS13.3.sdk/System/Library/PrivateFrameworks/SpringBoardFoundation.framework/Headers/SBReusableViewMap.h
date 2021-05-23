/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSString;

@protocol SBReusableViewMapDelegate;

@interface SBReusableViewMap : NSObject

{
    NSMapTable *_recycledViewsByClass;
    _Bool _invalidated;
    id <SBReusableViewMapDelegate> _delegate;
}

@property (weak, nonatomic) id <SBReusableViewMapDelegate> delegate;
@property (nonatomic, readonly) unsigned long long recycledViewCount;
@property (nonatomic, readonly) unsigned long long viewRecyclingCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)initWithDelegate:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)dequeueReusableViewOfClass:(Class)arg1;
- (id)newViewOfClass:(Class)arg1;
- (void)purgeViewsForClass:(Class)arg1;
- (void)recycleView:(id)arg1;
- (id)viewOfClass:(Class)arg1;
- (_Bool)isViewRecycled:(id)arg1;
- (void)purgeAllViews;
- (void)addRecycledViewsOfClass:(Class)arg1 upToCount:(unsigned long long)arg2;

@end
