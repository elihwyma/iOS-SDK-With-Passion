/*
 Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface CNVCardReadingOptions : NSObject

{
    _Bool _useConcurrentParsing;
    unsigned long long _contactLimit;
    NSArray *_propertiesToFetch;
    unsigned long long _maximumValueLength;
}

@property (nonatomic) unsigned long long contactLimit;
@property (copy, nonatomic) NSArray *propertiesToFetch;
@property (nonatomic) unsigned long long maximumValueLength;
@property (nonatomic) _Bool useConcurrentParsing;

- (id)init;
- (id)description;

@end
