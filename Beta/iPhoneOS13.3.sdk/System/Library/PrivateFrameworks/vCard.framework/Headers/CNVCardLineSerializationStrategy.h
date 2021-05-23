/*
 Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

#import <Foundation/NSObject.h>

@interface CNVCardLineSerializationStrategy : NSObject

+ (id)version21StrategyWithStringStorage:(id)arg1 encodings:(id)arg2;
+ (id)version30StrategyWithStringStorage:(id)arg1;
+ (id)version21StrategyWithDataStorage:(id)arg1 encodings:(id)arg2;
+ (id)version30StrategyWithDataStorage:(id)arg1;

@end
