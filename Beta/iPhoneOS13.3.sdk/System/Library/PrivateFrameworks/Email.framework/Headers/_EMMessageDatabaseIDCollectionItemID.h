/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/EMMessageCollectionItemID.h>

@class NSString;

@interface _EMMessageDatabaseIDCollectionItemID : EMMessageCollectionItemID

{
    long long _databaseID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long databaseID;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessageDatabaseID:(long long)arg1;
- (id)cachedSelf;

@end
