//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Email/EMMessageCollectionItemID.h>

#import <Email/EFCacheable-Protocol.h>

@class NSString;

@interface _EMMessageDatabaseIDCollectionItemID : EMMessageCollectionItemID <EFCacheable>
{
    long long _databaseID;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) long long databaseID; // @synthesize databaseID=_databaseID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithMessageDatabaseID:(long long)arg1;
- (id)cachedSelf;

@end

