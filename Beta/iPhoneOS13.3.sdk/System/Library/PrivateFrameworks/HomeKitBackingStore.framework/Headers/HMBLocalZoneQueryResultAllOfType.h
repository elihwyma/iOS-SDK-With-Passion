/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HomeKitBackingStore/HMBLocalZoneQueryResultRecordColumns.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMBLocalZoneQueryResultAllOfType : HMBLocalZoneQueryResultRecordColumns

{
    int _modelClassNameOffset;
    NSString *_modelClassName;
}

@property (nonatomic, readonly) int modelClassNameOffset;
@property (nonatomic, readonly) NSString *modelClassName;

- (_Bool)bindPropertiesToStatement:(struct sqlite3_stmt *)arg1 error:(id *)arg2;
- (id)initWithLocalZone:(id)arg1 modelClassName:(id)arg2;

@end
