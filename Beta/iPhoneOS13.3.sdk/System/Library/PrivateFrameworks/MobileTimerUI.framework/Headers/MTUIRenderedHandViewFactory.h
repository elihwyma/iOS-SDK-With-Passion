/*
 Image: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
 */

#import <Foundation/NSObject.h>

@class NSBundle, NSMutableDictionary, NSString;

@interface MTUIRenderedHandViewFactory : NSObject

{
    NSBundle *_resourcesBundle;
    NSString *_imagePath;
    struct CGPoint _offset;
    struct CGSize _scale;
    struct CGPDFPage *_page;
    struct CGSize _viewSize;
    _Bool _allowCaching;
    NSMutableDictionary *_angleCache;
    unsigned long long _registeredClientsCount;
}

@property (nonatomic, readonly) NSString *key;
@property (nonatomic) unsigned long long registeredClientsCount;
@property (nonatomic, readonly) _Bool allowCaching;

+ (void)flushAllCaches;
+ (id)keyForBundle:(id)arg1 imagePath:(id)arg2 offset:(struct CGPoint)arg3 scale:(struct CGSize)arg4;
+ (id)registerForFactoryWithBundle:(id)arg1 imagePath:(id)arg2 offset:(struct CGPoint)arg3 scale:(struct CGSize)arg4 allowCaching:(_Bool)arg5;
+ (void)unregisterForFactory:(id)arg1;

- (void)dealloc;
- (void)flushCache;
- (id)initWithBundle:(id)arg1 imagePath:(id)arg2 offset:(struct CGPoint)arg3 scale:(struct CGSize)arg4 allowCaching:(_Bool)arg5;
- (id)renderImageForAngle:(double)arg1 viewSize:(struct CGSize)arg2;
- (id)imageForAngle:(double)arg1 viewSize:(struct CGSize)arg2;

@end
