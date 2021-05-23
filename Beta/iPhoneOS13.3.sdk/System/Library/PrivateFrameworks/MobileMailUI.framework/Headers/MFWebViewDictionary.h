/*
 Image: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
 */

#import <Foundation/NSMutableDictionary.h>

@class NSMutableSet, NSString;

@protocol MFMailWebProcessProxy;

@interface MFWebViewDictionary : NSMutableDictionary

{
    NSMutableDictionary *_storage;
    id <MFMailWebProcessProxy> _webProcessProxy;
    NSMutableSet *_changedKeys;
    _Bool _requiresResynchronization;
    NSString *_javascriptName;
}

@property (nonatomic, readonly) NSString *javascriptName;

- (id)init;
- (unsigned long long)hash;
- (id)initWithCapacity:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)objectEnumerator;
- (void)synchronize;
- (id)allKeys;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)removeObjectForKey:(id)arg1;
- (_Bool)isEqualToDictionary:(id)arg1;
- (id)keyEnumerator;
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2 count:(unsigned long long)arg3;
- (id)allValues;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (id)allKeysForObject:(id)arg1;
- (id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2;
- (void)removeObjectsForKeys:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setDictionary:(id)arg1;
- (void)setValuesForKeysWithDictionary:(id)arg1;
- (void)_setRequiresSynchronization;
- (void)_updateRemoteInstance;
- (void)registerWithWebView:(id)arg1 javascriptName:(id)arg2;

@end
