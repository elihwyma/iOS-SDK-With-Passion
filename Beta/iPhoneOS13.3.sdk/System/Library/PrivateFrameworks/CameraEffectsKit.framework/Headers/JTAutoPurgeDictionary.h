/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol JTAutoPurgeDictionaryDelegate;

@interface JTAutoPurgeDictionary : NSObject

{
    NSMutableDictionary *_dictionary;
    _Bool _suspendPurging;
    id <JTAutoPurgeDictionaryDelegate> _delegate;
}

@property (readonly) unsigned long long count;
@property _Bool suspendPurging;
@property (weak, nonatomic) id <JTAutoPurgeDictionaryDelegate> delegate;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)highMemoryWarning;
- (id)copyOfDictionary;

@end
