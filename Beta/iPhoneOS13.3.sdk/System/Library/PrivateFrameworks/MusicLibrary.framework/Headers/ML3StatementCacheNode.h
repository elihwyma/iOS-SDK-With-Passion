/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@protocol NSCopying;

__attribute__((visibility("hidden")))
@interface ML3StatementCacheNode : NSObject

{
    NSObject<NSCopying> *_dictionaryKey;
    ML3StatementCacheNode *_next;
}

@property (copy, nonatomic) NSObject<NSCopying> *dictionaryKey;
@property (retain, nonatomic) ML3StatementCacheNode *next;

- (id)description;
- (id)initWithDictionaryKey:(id)arg1;

@end
