/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class CKServerChangeToken, NSArray, NSError;

@interface FCCKPrivateFetchDatabaseChangesSingleDestinationResult : NSObject

{
    _Bool _moreComing;
    long long _destination;
    NSArray *_changedZoneIDs;
    NSArray *_deletedZoneIDs;
    CKServerChangeToken *_serverChangeToken;
    NSError *_error;
}

@property (nonatomic) long long destination;
@property (retain, nonatomic) NSArray *changedZoneIDs;
@property (retain, nonatomic) NSArray *deletedZoneIDs;
@property (retain, nonatomic) CKServerChangeToken *serverChangeToken;
@property (nonatomic) _Bool moreComing;
@property (retain, nonatomic) NSError *error;

@end
