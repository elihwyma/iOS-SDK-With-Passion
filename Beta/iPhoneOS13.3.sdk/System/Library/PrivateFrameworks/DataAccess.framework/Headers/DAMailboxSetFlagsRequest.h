/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <DataAccess/DAMailboxRequest.h>

@interface DAMailboxSetFlagsRequest : DAMailboxRequest

{
    unsigned long long _onFlags;
    unsigned long long _offFlags;
}

@property (nonatomic) unsigned long long onFlags;
@property (nonatomic) unsigned long long offFlags;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initRequestWithSetFlags:(unsigned long long)arg1 unsetFlags:(unsigned long long)arg2 message:(id)arg3;

@end
