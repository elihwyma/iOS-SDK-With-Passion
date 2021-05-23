/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class NSArray, SCKZoneDiff, SCKZoneSchema;

@protocol SCKZoneStore;

@interface SCKZone : NSObject

{
    SCKZoneSchema *_schema;
    id <SCKZoneStore> _store;
}

@property (retain, nonatomic) id <SCKZoneStore> store;
@property (nonatomic, readonly) SCKZoneSchema *schema;
@property (copy, nonatomic, readonly) NSArray *clientRecords;
@property (copy, nonatomic, readonly) SCKZoneDiff *clientDiff;
@property (nonatomic, readonly) _Bool needsFirstSync;
@property (nonatomic, readonly, getter=isDirty) _Bool dirty;

- (id)initWithSchema:(id)arg1 store:(id)arg2;

@end
