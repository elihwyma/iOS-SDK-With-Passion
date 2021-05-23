/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <DataAccess/DAMailboxRequest.h>

@interface DAMailboxFetchMessageRequest : DAMailboxRequest

{
    int _maxSize;
}

@property (nonatomic) int maxSize;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initRequestForBodyFormat:(int)arg1 withMessageID:(id)arg2 withBodySizeLimit:(int)arg3;

@end
