/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PUReuseQueue : NSObject

{
    _Bool _reuseEnabled;
    NSMutableDictionary *__objectCreationBlocksByReuseIdentifier;
    NSMutableDictionary *__reusableObjectsByReuseIdentifier;
}

@property (nonatomic, readonly) NSMutableDictionary *_objectCreationBlocksByReuseIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *_reusableObjectsByReuseIdentifier;
@property (nonatomic, getter=isReuseEnabled) _Bool reuseEnabled;

- (id)init;
- (void)registerObjectCreationBlock:(CDUnknownBlockType)arg1 withReuseIdentifier:(id)arg2;
- (id)dequeueObjectWithReuseIdentifier:(id)arg1 isReused:(_Bool *)arg2;
- (void)enqueueObjectForReuse:(id)arg1 withReuseIdentifier:(id)arg2;

@end
