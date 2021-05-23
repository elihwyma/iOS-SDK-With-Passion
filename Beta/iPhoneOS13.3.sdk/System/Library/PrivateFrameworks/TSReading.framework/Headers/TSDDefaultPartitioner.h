/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@class NSString, TSDCanvas, TSDLayout, TSUPointerKeyDictionary;

@protocol TSDInfo;

@interface TSDDefaultPartitioner : NSObject <Swift>

{
    NSObject<TSDInfo> *mInfo;
    TSDCanvas *mCanvas;
    TSDLayout *mLayout;
    TSUPointerKeyDictionary *mMainRepsByCanvas;
    TSUPointerKeyDictionary *mCachedImagesByCanvas;
    TSUPointerKeyDictionary *mPartialRepsByCanvas;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithInfo:(id)arg1;
- (id)documentRoot;
- (id)i_layout;
- (void)p_generateLayouts;
- (void)p_teardownLayouts;
- (unsigned long long)p_edgesForHintBounds:(struct CGRect)arg1;
- (id)p_nextHintForSize:(struct CGSize)arg1 previousHint:(id)arg2 horizontally:(_Bool)arg3;
- (id)p_firstHintForSize:(struct CGSize)arg1;
- (id)nextHintForSize:(struct CGSize)arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(_Bool)arg4 outFinished:(out _Bool *)arg5;
- (id)layoutForHint:(id)arg1 parentLayout:(id)arg2;
- (id)nextLayoutForSize:(struct CGSize)arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(_Bool)arg4 outFinished:(out _Bool *)arg5;
- (_Bool)didHint:(id)arg1 syncWithNextHint:(id)arg2 horizontally:(_Bool)arg3 delta:(int)arg4;
- (id)hintForLayout:(id)arg1;
- (id)i_repForCanvas:(id)arg1;
- (struct CGImage *)i_cachedImageForCanvas:(id)arg1;
- (void)i_setCachedImage:(struct CGImage *)arg1 forCanvas:(id)arg2;
- (void)i_removeCachedImageForCanvas:(id)arg1;
- (void)i_registerPartialRep:(id)arg1;
- (void)i_unregisterPartialRep:(id)arg1;

@end
