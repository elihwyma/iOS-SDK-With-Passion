/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface SBSceneDataStore : NSObject

{
    NSString *_identifier;
    NSMutableDictionary *_data;
    NSMutableDictionary *_archivedObjectCache;
    CDUnknownBlockType _handler;
    _Bool _invalidated;
}

@property (nonatomic, readonly, getter=_data) NSDictionary *data;
@property (nonatomic, readonly, getter=_isInvalidated) _Bool invalidated;
@property (copy, nonatomic, readonly) NSString *identifier;

- (void)_invalidate;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)safeObjectForKey:(id)arg1 ofType:(Class)arg2;
- (void)setArchivedObject:(id)arg1 forKey:(id)arg2;
- (id)_initWithIdentifier:(id)arg1 data:(id)arg2 changeHandler:(CDUnknownBlockType)arg3;
- (void)_invokeChangeHandler;
- (id)unarchivedObjectOfClass:(Class)arg1 forKey:(id)arg2;

@end
