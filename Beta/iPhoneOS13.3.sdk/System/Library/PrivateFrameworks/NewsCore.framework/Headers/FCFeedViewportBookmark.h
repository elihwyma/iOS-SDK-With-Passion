/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSString;

@interface FCFeedViewportBookmark : NSObject <Swift>

{
    NSString *_externalGroupID;
    NSString *_internalGroupID;
    NSString *_articleID;
}

@property (copy, nonatomic, readonly) NSString *externalGroupID;
@property (copy, nonatomic, readonly) NSString *internalGroupID;
@property (copy, nonatomic, readonly) NSString *articleID;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithExternalGroupID:(id)arg1 internalGroupID:(id)arg2 articleID:(id)arg3;

@end
