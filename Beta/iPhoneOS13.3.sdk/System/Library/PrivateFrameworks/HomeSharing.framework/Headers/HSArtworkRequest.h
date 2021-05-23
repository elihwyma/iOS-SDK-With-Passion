/*
 Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <HomeSharing/HSRequest.h>

@interface HSArtworkRequest : HSRequest

+ (id)requestWithDatabaseID:(unsigned int)arg1 itemID:(unsigned long long)arg2 size:(struct CGSize)arg3;

- (_Bool)isConcurrent;
- (_Bool)acceptsGzipEncoding;
- (id)initWithDatabaseID:(unsigned int)arg1 itemID:(unsigned long long)arg2 size:(struct CGSize)arg3;

@end
