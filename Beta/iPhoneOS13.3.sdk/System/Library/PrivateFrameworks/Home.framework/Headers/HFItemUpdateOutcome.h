/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

#import <Home/Swift-Protocol.h>

@class NSArray, NSDictionary;

@interface HFItemUpdateOutcome : NSObject <Swift>

{
    NSDictionary *_results;
    unsigned long long _outcomeType;
}

@property (nonatomic) unsigned long long outcomeType;
@property (nonatomic, readonly) NSDictionary *results;
@property (nonatomic, readonly) NSArray *allKeys;

+ (id)outcomeWithResults:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)initWithResults:(id)arg1;
- (id)initWithResults:(id)arg1 type:(unsigned long long)arg2;

@end
