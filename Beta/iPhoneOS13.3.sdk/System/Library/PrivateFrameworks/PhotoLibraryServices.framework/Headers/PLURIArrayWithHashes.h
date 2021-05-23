/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface PLURIArrayWithHashes : NSObject

{
    struct __CFArray *_uris;
    struct __CFArray *_hashes;
    NSMutableArray *_attributeValues;
    NSMutableArray *_relationshipValues;
}

@property (nonatomic) struct __CFArray *uris;
@property (nonatomic) struct __CFArray *hashes;
@property (retain, nonatomic) NSMutableArray *attributeValues;
@property (retain, nonatomic) NSMutableArray *relationshipValues;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) _Bool isUpdate;

- (id)init;
- (id)description;
- (id)initForUpdates:(_Bool)arg1;

@end
