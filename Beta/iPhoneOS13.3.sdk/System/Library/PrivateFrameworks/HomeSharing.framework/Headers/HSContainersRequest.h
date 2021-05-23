/*
 Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <HomeSharing/HSRequest.h>

@interface HSContainersRequest : HSRequest

{
    _Bool _shouldParseResponse;
}

@property (nonatomic) _Bool shouldParseResponse;

+ (id)requestWithDatabaseID:(unsigned int)arg1;

- (id)initWithAction:(id)arg1;
- (id)canonicalResponseForResponse:(id)arg1;
- (id)initWithDatabaseID:(unsigned int)arg1;

@end
