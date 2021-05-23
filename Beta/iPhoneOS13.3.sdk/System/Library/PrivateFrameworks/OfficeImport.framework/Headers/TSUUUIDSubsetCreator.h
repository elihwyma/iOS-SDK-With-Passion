/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, TSUUUIDSetStore;

__attribute__((visibility("hidden")))
@interface TSUUUIDSubsetCreator : NSObject

{
    TSUUUIDSetStore *_uuidSetStore;
    vector_4dc5f307 _baseUuidVector;
    NSMutableDictionary *_createdSubsetsByRange;
}

@property (readonly) const vector_4dc5f307 *baseUuidVector;
@property (readonly) TSUUUIDSetStore *uuidSetStore;

- (id).cxx_construct;
- (id)initWithUuidSetStore:(id)arg1 baseUuidVector:(const vector_4dc5f307 *)arg2;
- (unsigned int)uuidSetStoreIndexForIndexesInRange:(struct _NSRange)arg1;

@end
