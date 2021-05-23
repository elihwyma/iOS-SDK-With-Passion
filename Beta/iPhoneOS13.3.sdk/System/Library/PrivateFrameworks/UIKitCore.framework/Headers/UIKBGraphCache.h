/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, UIScreen;

__attribute__((visibility("hidden")))
@interface UIKBGraphCache : NSObject

{
    UIScreen *_screen;
    NSMutableDictionary *_graphCache;
}

@property (nonatomic, readonly) NSMutableDictionary *graphCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) UIScreen *_intendedScreen;
@property (readonly) NSDictionary *_options;

+ (id)graphCacheForScreen:(id)arg1;

- (void)dealloc;
- (id)_initWithScreen:(id)arg1 options:(id)arg2;
- (_Bool)_matchingOptions:(id)arg1;

@end
