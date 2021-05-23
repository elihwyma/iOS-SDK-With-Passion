/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface EMMessageCollectionItemID : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)messageCollectionItemIDForDatabaseID:(long long)arg1;
+ (id)messageCollectionItemIDForMessageIDHeaderHash:(id)arg1 mailboxScope:(id)arg2;
+ (id)unarchivingObjectClassSet;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
