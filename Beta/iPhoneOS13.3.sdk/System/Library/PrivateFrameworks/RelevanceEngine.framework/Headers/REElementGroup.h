/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface REElementGroup : NSObject

{
    NSString *_groupIdentifier;
    unsigned long long _behavior;
    long long _maxElementCount;
}

@property (nonatomic, readonly) NSString *groupIdentifier;
@property (nonatomic) unsigned long long behavior;
@property (nonatomic) long long maxElementCount;

+ (id)topElementGroupWithIdentifier:(id)arg1;
+ (id)adjoiningElementGroupWithIdentifier:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithGroupIdentifier:(id)arg1;

@end
