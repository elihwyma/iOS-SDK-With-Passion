/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIScrollView;

@interface NUArticleKeyCommandManager : NSObject

{
    _Bool _hasBeenTraversed;
    UIScrollView *_scrollView;
}

@property (weak, nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic) _Bool hasBeenTraversed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)handleKey:(id)arg1 flags:(long long)arg2;
- (id)keyCommandsWithSelector:(SEL)arg1;
- (void)handleKeyCommand:(id)arg1;
- (void)registerScrollView:(id)arg1;

@end
