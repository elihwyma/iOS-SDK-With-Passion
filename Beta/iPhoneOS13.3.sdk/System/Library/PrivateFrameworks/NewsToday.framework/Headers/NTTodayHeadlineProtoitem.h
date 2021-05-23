/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <Foundation/NSObject.h>

@class NSString, SFSearchResult;

@protocol FCHeadlineProviding;

@interface NTTodayHeadlineProtoitem : NSObject

{
    NSString *_identifier;
    id <FCHeadlineProviding> _headline;
    SFSearchResult *_searchResult;
}

@property (copy, nonatomic, readonly) id <FCHeadlineProviding> headline;
@property (copy, nonatomic, readonly) SFSearchResult *searchResult;
@property (copy, nonatomic, readonly) NSString *identifier;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)assetHandlesWithOperationInfo:(id)arg1 forLeadingCellAppearance:(_Bool)arg2;
- (id)itemWithContentContext:(id)arg1 operationInfo:(id)arg2 sectionDescriptor:(id)arg3 todayData:(id)arg4 assetFileURLsByRemoteURL:(id)arg5 forLeadingCellAppearance:(_Bool)arg6 preferredDynamicSlotAllocation:(unsigned long long)arg7;
- (id)initWithIdentifier:(id)arg1 headline:(id)arg2 searchResult:(id)arg3;

@end
