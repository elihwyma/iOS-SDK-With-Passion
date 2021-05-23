/*
 Image: /System/Library/PrivateFrameworks/FriendKit.framework/FriendKit
 */

#import <Foundation/NSString.h>

@interface NSString (IDSDestinationParsing)

- (long long)fkMessageDestinationType;
- (id)fkMessageCanonicalRawAddress;
- (id)fkMessageIDSIdentifier;
- (_Bool)fkMessageIsIDSIdentifier;
- (_Bool)fkMessageIsRawAddress;
- (id)fkMessageRawAddress;

@end
