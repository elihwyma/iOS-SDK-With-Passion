/*
 Image: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSSet;

@interface UAPasteboardGeneration : NSObject

{
    unsigned long long _generation;
    NSSet *_allTypes;
    NSArray *_items;
    NSMutableDictionary *_typePaths;
}

@property (copy) NSSet *allTypes;
@property (copy) NSArray *items;
@property (retain) NSMutableDictionary *typePaths;
@property (readonly) unsigned long long generation;

- (_Bool)addItem:(id)arg1;
- (_Bool)addType:(id)arg1 toItemAtIndex:(unsigned long long)arg2;
- (id)initWithGeneration:(unsigned long long)arg1;
- (id)getTypePaths;
- (void)fetchTypeURL:(id)arg1;

@end
