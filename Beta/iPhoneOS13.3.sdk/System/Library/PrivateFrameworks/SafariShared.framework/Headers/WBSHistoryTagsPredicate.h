/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSDate, NSSet, NSString;

@interface WBSHistoryTagsPredicate : NSObject

{
    NSDate *_startDate;
    NSDate *_endDate;
    unsigned long long _tagType;
    NSSet *_identifiers;
    unsigned long long _limit;
    unsigned long long _minimumItemCount;
    long long _sortOrder;
}

@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) unsigned long long tagType;
@property (copy, nonatomic) NSSet *identifiers;
@property (nonatomic) unsigned long long limit;
@property (nonatomic) unsigned long long minimumItemCount;
@property (nonatomic) long long sortOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 tagType:(unsigned long long)arg3;
- (id)statementForDatabase:(id)arg1 cache:(id)arg2 fetchOptions:(unsigned long long)arg3 error:(id *)arg4;

@end
