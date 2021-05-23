/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface CAMMemoizationCache : NSObject

{
    _Bool _memoizesNil;
    NSMutableDictionary *__dictionary;
}

@property (nonatomic, readonly) NSMutableDictionary *_dictionary;
@property (nonatomic, readonly) _Bool memoizesNil;

- (id)init;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithMemoizesNil:(_Bool)arg1;
- (id)objectForKey:(id)arg1 memoizationBlock:(CDUnknownBlockType)arg2;

@end
