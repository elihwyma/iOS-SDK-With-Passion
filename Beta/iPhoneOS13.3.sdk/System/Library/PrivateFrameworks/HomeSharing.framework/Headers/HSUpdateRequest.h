/*
 Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <HomeSharing/HSRequest.h>

@interface HSUpdateRequest : HSRequest

{
    long long _connectionType;
}

+ (id)requestWithDatabaseRevision:(unsigned int)arg1 sessionID:(unsigned int)arg2 connectionType:(long long)arg3;

- (_Bool)isConcurrent;
- (double)timeoutInterval;
- (id)canonicalResponseForResponse:(id)arg1;
- (id)initWithDatabaseRevision:(unsigned int)arg1 sessionID:(unsigned int)arg2 connectionType:(long long)arg3;
- (id)_bodyDataForDatabaseRevision:(unsigned int)arg1 sessionID:(unsigned int)arg2;

@end
