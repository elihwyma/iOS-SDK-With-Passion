/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, PSIDateFilter;

@interface PSIGroupResultGroupSnapshot : NSObject

{
    NSMutableArray *_tokens;
    NSMutableArray *_matchRanges;
    short _category;
    NSString *_contentString;
    NSString *_normalizedString;
    NSString *_lookupIdentifier;
    NSArray *_groupRanges;
    PSIDateFilter *_dateFilter;
    NSArray *_datedTokens;
    unsigned long long _groupId;
    unsigned long long _owningGroupId;
}

@property (copy, nonatomic, readonly) NSString *contentString;
@property (copy, nonatomic, readonly) NSString *normalizedString;
@property (copy, nonatomic, readonly) NSString *lookupIdentifier;
@property (nonatomic, readonly) NSArray *tokens;
@property (nonatomic, readonly) NSArray *matchRanges;
@property (nonatomic, readonly) NSArray *groupRanges;
@property (copy, nonatomic, readonly) PSIDateFilter *dateFilter;
@property (nonatomic, readonly) NSArray *datedTokens;
@property (nonatomic, readonly) short category;
@property (nonatomic, readonly) unsigned long long groupId;
@property (nonatomic, readonly) unsigned long long owningGroupId;

- (id)initWithContentString:(id)arg1 normalizedString:(id)arg2 token:(id)arg3 category:(short)arg4 lookupIdentifier:(id)arg5 dateFilter:(id)arg6 groupId:(unsigned long long)arg7 owningGroupId:(unsigned long long)arg8 groupRanges:(id)arg9 datedTokens:(id)arg10;
- (id)initWithGroup:(id)arg1 token:(id)arg2;
- (id)initWithDateFilter:(id)arg1 datedTokens:(id)arg2;
- (id)initWithContentString:(id)arg1 lookupIdentifier:(id)arg2 category:(short)arg3;
- (void)addToken:(id)arg1;
- (void)addMatchRange:(id)arg1;
- (_Bool)isDateFilterFromFullSearchText;
- (_Bool)isDateFilterPartiallyFromFullSearchText;
- (_Bool)isDateFilterFromImplicitToken;

@end
