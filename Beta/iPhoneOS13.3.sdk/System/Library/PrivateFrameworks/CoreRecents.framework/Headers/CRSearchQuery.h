/*
 Image: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents
 */

#import <Foundation/NSObject.h>

@class NSArray, NSPredicate, NSString;

@interface CRSearchQuery : NSObject

{
    NSPredicate *_predicate;
    NSArray *_domains;
    unsigned long long _implicitGroupThreshold;
    unsigned long long _options;
    CDUnknownBlockType _weightDecayer;
    CDUnknownBlockType _comparator;
    NSString *_uuid;
    struct _NSRange _pageRange;
}

@property (copy, nonatomic, readonly) NSString *uuid;
@property (retain, nonatomic) NSPredicate *predicate;
@property (copy, nonatomic) NSArray *domains;
@property (nonatomic) unsigned long long implicitGroupThreshold;
@property (nonatomic) unsigned long long options;
@property (nonatomic) struct _NSRange pageRange;
@property (copy, nonatomic) CDUnknownBlockType weightDecayer;
@property (copy, nonatomic) CDUnknownBlockType comparator;

+ (_Bool)supportsSecureCoding;
+ (CDUnknownBlockType)frecencyComparator;
+ (CDUnknownBlockType)frecencyComparatorForSearch:(id)arg1 preferredKinds:(id)arg2 sendingAddress:(id)arg3 queryOptions:(unsigned long long)arg4;
+ (id)searchQueryForSearchTerm:(id)arg1 preferredKinds:(id)arg2 sendingAddress:(id)arg3 recentsDomain:(id)arg4;
+ (CDUnknownBlockType)rankedFrecencyComparatorWithPreferredSources:(id)arg1;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
