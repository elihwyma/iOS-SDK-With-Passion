/*
 Image: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
 */

#import <Foundation/NSURL.h>

@interface NSURL (BUAdditions)

+ (id)bu_urlWithAssetID:(id)arg1;

- (long long)bu_storeURLTypeFromHost:(id)arg1;
- (long long)bu_storeURLType;
- (id)bu_isbnForURI;
- (id)bu_assetIDFromURL;
- (id)bu_libraryIDFromURL;
- (id)bu_storeURLForISBNURN;
- (void)bu_storeURLForISBNURNWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)bu_fileAllocatedSizeWithError:(id *)arg1;

@end
