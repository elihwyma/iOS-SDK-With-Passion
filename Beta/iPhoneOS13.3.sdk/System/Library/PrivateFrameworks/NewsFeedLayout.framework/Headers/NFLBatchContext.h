/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <Foundation/NSObject.h>

#import <NewsFeedLayout/Swift-Protocol.h>

@class NSString;

@interface NFLBatchContext : NSObject <Swift>

{
    NSString *_identifier;
    unsigned long long _batchType;
}

@property (nonatomic, readonly) unsigned long long batchType;
@property (copy, nonatomic, readonly) NSString *identifier;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initForTesting;
- (id)initWithBatchType:(unsigned long long)arg1;

@end
