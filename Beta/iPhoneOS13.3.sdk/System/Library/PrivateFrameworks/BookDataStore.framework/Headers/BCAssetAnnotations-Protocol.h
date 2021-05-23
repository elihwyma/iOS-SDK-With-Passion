/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <BookDataStore/Swift-Protocol.h>

@class NSData, NSString;

@protocol BCAssetAnnotations <Swift>

@property (copy, nonatomic, readonly) NSString *assetID;
@property (copy, nonatomic, readonly) NSString *assetVersion;
@property (nonatomic, readonly) NSData *bookAnnotations;

@end
