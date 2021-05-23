/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOSQLiteVirtualTable : NSObject

{
    NSString *_name;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) struct sqlite3_module *module;
@property (nonatomic, readonly) NSString *columnDefinitions;
@property (nonatomic, readonly) unsigned long long rowCount;

- (id)init;
- (id)initWithName:(id)arg1;
- (void)fetchValueForContext:(struct sqlite3_context *)arg1 row:(unsigned long long)arg2 column:(unsigned long long)arg3;

@end
