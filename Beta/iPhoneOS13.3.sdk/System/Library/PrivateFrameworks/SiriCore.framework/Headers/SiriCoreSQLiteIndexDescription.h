/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

#import <Foundation/NSObject.h>

#import <SiriCore/Swift-Protocol.h>

@class NSArray, NSString;

@interface SiriCoreSQLiteIndexDescription : NSObject <Swift>

{
    NSString *_name;
    NSString *_tableName;
    NSArray *_columnNames;
    unsigned long long _options;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *tableName;
@property (copy, nonatomic, readonly) NSArray *columnNames;
@property (nonatomic, readonly) unsigned long long options;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 tableName:(id)arg2 columnNames:(id)arg3 options:(unsigned long long)arg4;

@end
