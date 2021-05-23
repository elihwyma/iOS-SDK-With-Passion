/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <DataAccess/DAMailboxRequest.h>

@interface DAMailboxGetUpdatesRequest : DAMailboxRequest

{
    int _maxSize;
}

@property (nonatomic) int maxSize;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initRequestForBodyFormat:(int)arg1 withBodySizeLimit:(int)arg2;

@end
