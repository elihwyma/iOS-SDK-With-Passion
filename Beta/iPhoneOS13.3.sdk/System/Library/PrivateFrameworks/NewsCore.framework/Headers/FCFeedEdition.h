/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class FCDateRange, NSDate;

@interface FCFeedEdition : NSObject <Swift>

{
    NSDate *_keyDate;
    FCDateRange *_feedDateRange;
}

@property (copy, nonatomic) NSDate *keyDate;
@property (copy, nonatomic) FCDateRange *feedDateRange;

+ (id)editionWithKeyDate:(id)arg1 feedDateRange:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithKeyDate:(id)arg1 feedDateRange:(id)arg2;

@end
