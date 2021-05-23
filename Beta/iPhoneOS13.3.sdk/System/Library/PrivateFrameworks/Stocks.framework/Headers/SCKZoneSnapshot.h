/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class NSArray, SCKZoneSchema;

@interface SCKZoneSnapshot : NSObject

{
    SCKZoneSchema *_zoneSchema;
    NSArray *_records;
}

@property (retain, nonatomic) SCKZoneSchema *zoneSchema;
@property (copy, nonatomic) NSArray *records;
@property (copy, nonatomic, readonly) NSArray *allRecords;

- (id)recordWithName:(id)arg1;
- (id)recordOfType:(id)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)recordsOfType:(id)arg1;
- (id)recordOfType:(id)arg1;
- (id)initWithZoneSchema:(id)arg1 records:(id)arg2;
- (_Bool)isEqualToSnapshot:(id)arg1;
- (id)descriptionOfContents;

@end
