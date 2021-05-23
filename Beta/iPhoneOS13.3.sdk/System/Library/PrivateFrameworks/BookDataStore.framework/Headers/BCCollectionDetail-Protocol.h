/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <BookDataStore/Swift-Protocol.h>

@class NSString;

@protocol BCCollectionDetail <Swift>

@property (copy, nonatomic, readonly) NSString *collectionID;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *collectionDescription;
@property (nonatomic, readonly) _Bool hidden;
@property (nonatomic, readonly) int sortOrder;
@property (nonatomic, readonly) int sortMode;

@end
