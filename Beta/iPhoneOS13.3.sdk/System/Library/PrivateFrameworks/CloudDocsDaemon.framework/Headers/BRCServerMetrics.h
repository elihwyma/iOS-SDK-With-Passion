/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

#import <CloudDocsDaemon/Swift-Protocol.h>

@class NSNumber;

@interface BRCServerMetrics : NSObject <Swift>

{
    NSNumber *_quotaUsed;
    NSNumber *_recursiveChildCount;
    NSNumber *_sharedByMeRecursiveCount;
    NSNumber *_sharedAliasRecursiveCount;
    NSNumber *_childCount;
}

@property (retain, nonatomic) NSNumber *quotaUsed;
@property (retain, nonatomic) NSNumber *recursiveChildCount;
@property (retain, nonatomic) NSNumber *sharedByMeRecursiveCount;
@property (retain, nonatomic) NSNumber *sharedAliasRecursiveCount;
@property (retain, nonatomic) NSNumber *childCount;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)descriptionWithContext:(id)arg1;
- (id)initFromResultSet:(id)arg1 pos:(int)arg2;
- (id)initWithServerMetrics:(id)arg1;

@end
