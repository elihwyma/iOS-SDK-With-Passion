/*
 Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKVOBlockHelper : NSObject

{
    id _observedObject;
    NSMutableDictionary *_tokensByContext;
    long long _nextIdentifier;
}

@property (weak, nonatomic, readonly) id observedObject;
@property (nonatomic, readonly) NSMutableDictionary *tokensByContext;
@property (nonatomic) long long nextIdentifier;

- (void)dealloc;
- (id)debugDescription;
- (id)initWithObject:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dump;
- (void)removeHandlerForKey:(id)arg1;
- (id)insertNewTokenForKeyPath:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)allKVOObservers;

@end
