/*
 Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <HomeSharing/HSRequest.h>

@interface HSItemsRequest : HSRequest

{
    _Bool _shouldParseResponse;
    _Bool _includeHiddenItems;
}

@property (nonatomic) _Bool shouldParseResponse;
@property (nonatomic) _Bool includeHiddenItems;

+ (id)requestWithDatabaseID:(unsigned int)arg1;
+ (id)requestWithDatabaseID:(unsigned int)arg1 containerID:(unsigned int)arg2;

- (double)timeoutInterval;
- (id)initWithAction:(id)arg1;
- (id)canonicalResponseForResponse:(id)arg1;
- (id)initWithDatabaseID:(unsigned int)arg1;
- (id)initWithDatabaseID:(unsigned int)arg1 containerID:(unsigned int)arg2;

@end
