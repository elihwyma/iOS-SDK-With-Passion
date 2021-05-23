/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface FCCKPrivateDatabaseCKPayload : NSObject

{
    NSArray *_recordIDs;
    NSArray *_records;
    NSArray *_zoneIDs;
    NSArray *_zones;
    long long _destination;
}

@property (retain, nonatomic) NSArray *recordIDs;
@property (retain, nonatomic) NSArray *records;
@property (retain, nonatomic) NSArray *zoneIDs;
@property (retain, nonatomic) NSArray *zones;
@property (nonatomic) long long destination;

@end
