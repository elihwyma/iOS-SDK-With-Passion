/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@class NSPointerArray;

@interface AKInkAnnotationDrawingImageCache : NSObject

{
    NSPointerArray *_pointerArray;
}

@property (retain, nonatomic) NSPointerArray *pointerArray;

+ (id)sharedCache;
+ (void)purgeSharedCache;

- (id)init;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)_makeKeyMostRecentlyUsed:(id)arg1;
- (long long)_indexOfPointer:(void *)arg1;
- (void)_removeEntryAtIndex:(unsigned long long)arg1;
- (void)_addEntryWithObject:(id)arg1 key:(id)arg2;
- (void)_purgeExtraEntries;

@end
