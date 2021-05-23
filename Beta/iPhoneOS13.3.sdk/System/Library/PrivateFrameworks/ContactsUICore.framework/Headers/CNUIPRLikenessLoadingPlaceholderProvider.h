/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class CNCache, NSString;

@protocol CNScheduler;

@interface CNUIPRLikenessLoadingPlaceholderProvider : NSObject

{
    id <CNScheduler> _resourceLock;
    CNCache *_cache;
}

@property (nonatomic, readonly) id <CNScheduler> resourceLock;
@property (nonatomic, readonly) CNCache *cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)_cnui_likenessForSize:(struct CGSize)arg1 scale:(double)arg2;
- (struct CGImage *)_cnui_roundedRectImageForSize:(struct CGSize)arg1 scale:(double)arg2;
- (struct CGImage *)_cnui_circularImageForSize:(struct CGSize)arg1 scale:(double)arg2;
- (unsigned long long)_cnui_likenessType;
- (struct CGImage *)renderCircularImageForSize:(struct CGSize)arg1 scale:(double)arg2;
- (struct CGImage *)renderRoundedRectImageForSize:(struct CGSize)arg1 scale:(double)arg2;

@end
