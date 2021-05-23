/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/EMMessageCollectionItemID.h>

@class ECAngleBracketIDHash, NSString;

@interface _EMMessageIDCollectionItemID : EMMessageCollectionItemID

{
    _Atomic long long _messageIDHeaderHashValue;
    ECAngleBracketIDHash *_messageIDHeaderHash;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) ECAngleBracketIDHash *messageIDHeaderHash;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)cachedSelf;
- (id)initWithMessageIDHeaderHash:(id)arg1;

@end
