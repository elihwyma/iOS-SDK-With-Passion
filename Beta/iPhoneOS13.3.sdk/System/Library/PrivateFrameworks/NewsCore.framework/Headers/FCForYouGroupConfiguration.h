/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSString;

@interface FCForYouGroupConfiguration : NSObject <Swift>

{
    _Bool _allowsNativeAds;
    long long _groupType;
    NSString *_identifier;
    unsigned long long _groupPosition;
    unsigned long long _precedingGroupsCountForFirstGroup;
    unsigned long long _precedingGroupsCount;
}

@property (nonatomic) long long groupType;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) _Bool allowsNativeAds;
@property (nonatomic) unsigned long long groupPosition;
@property (nonatomic) unsigned long long precedingGroupsCount;
@property (nonatomic) unsigned long long precedingGroupsCountForFirstGroup;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithGroupPosition:(unsigned long long)arg1 precedingGroupsCount:(unsigned long long)arg2 precedingGroupsCountForFirstGroup:(unsigned long long)arg3;
- (long long)compareGroupPosition:(id)arg1;

@end
