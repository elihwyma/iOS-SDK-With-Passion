/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSSQLiteConnectionOptions : NSObject

{
    _Bool _readOnly;
    NSString *_databasePath;
    long long _cacheSize;
    NSString *_protectionType;
}

@property (copy, nonatomic) NSString *databasePath;
@property (nonatomic) long long cacheSize;
@property (copy, nonatomic) NSString *protectionType;
@property (nonatomic, getter=isReadOnly) _Bool readOnly;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)applyToDatabase:(struct sqlite3 *)arg1;
- (void)setCacheSizeWithNumberOfKilobytes:(long long)arg1;
- (id)initWithDatabasePath:(id)arg1;
- (void)setCacheSizeWithNumberOfDatabasePages:(long long)arg1;

@end
