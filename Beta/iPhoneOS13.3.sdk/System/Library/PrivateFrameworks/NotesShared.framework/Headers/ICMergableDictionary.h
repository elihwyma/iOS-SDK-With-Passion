/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class CRDictionary, CRDocument;

@interface ICMergableDictionary : NSObject

{
    CRDocument *_underlyingDocument;
    CRDictionary *_underlyingDictionary;
}

@property (retain, nonatomic) CRDocument *underlyingDocument;
@property (retain, nonatomic) CRDictionary *underlyingDictionary;

+ (id)decodeDictionaryFromData:(id)arg1;
+ (id)encodedDataWithDictionary:(id)arg1;

- (id)description;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)initWithReplicaID:(id)arg1;
- (_Bool)mergeWithMergableDictionary:(id)arg1;

@end
