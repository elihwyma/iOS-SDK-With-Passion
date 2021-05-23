/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class ML3DatabaseConnection, ML3MusicLibrary, NSMutableArray;

@interface ML3EntityReplacer : NSObject

{
    struct __CFDictionary *_propertyToIndexPair;
    NSMutableArray *_naturalStatements;
    ML3DatabaseConnection *_connection;
    ML3MusicLibrary *_library;
}

@property (nonatomic, readonly, getter=isOpen) _Bool open;

- (void)dealloc;
- (void)close;
- (_Bool)perform;
- (void)clearBindings;
- (void)bindValue:(id)arg1 forProperty:(id)arg2;
- (id)initWithEntityClass:(Class)arg1 properties:(id)arg2 library:(id)arg3;
- (void)bindNullForProperty:(id)arg1;
- (void)bindInt:(int)arg1 forProperty:(id)arg2;
- (void)bindDouble:(double)arg1 forProperty:(id)arg2;
- (void)bindPersistentID:(long long)arg1;

@end
