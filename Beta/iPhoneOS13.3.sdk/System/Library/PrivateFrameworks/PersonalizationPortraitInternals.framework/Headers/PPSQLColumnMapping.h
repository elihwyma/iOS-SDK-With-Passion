/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PPSQLColumnMapping : NSObject

{
    const struct PPCompactStringArray *_columnAliases;
    const struct PPCompactStringArray *_tableColumnNamesFromSchema;
    NSString *_uniqueTableName;
}

- (void)dealloc;
- (id)initWithStatement:(id)arg1;
- (int)indexForColumnName:(const char *)arg1 table:(const char *)arg2;
- (int)indexForColumnAlias:(const char *)arg1;

@end
