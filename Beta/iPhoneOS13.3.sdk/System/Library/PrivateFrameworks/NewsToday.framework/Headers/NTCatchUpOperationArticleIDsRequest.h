/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <Foundation/NSObject.h>

#import <NewsToday/Swift-Protocol.h>

@class NSDictionary, NSOrderedSet;

@protocol NSCopying><NSSecureCoding;

@interface NTCatchUpOperationArticleIDsRequest : NSObject <Swift>

{
    NSObject<NSCopying><NSSecureCoding> *_identifier;
    NSOrderedSet *_articleIDs;
    NSDictionary *_overrideHeadlineMetadataByArticleID;
}

@property (copy, nonatomic) NSObject<NSCopying><NSSecureCoding> *identifier;
@property (copy, nonatomic) NSOrderedSet *articleIDs;
@property (copy, nonatomic) NSDictionary *overrideHeadlineMetadataByArticleID;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithArticleIDs:(id)arg1 overrideHeadlineMetadataByArticleID:(id)arg2;

@end
