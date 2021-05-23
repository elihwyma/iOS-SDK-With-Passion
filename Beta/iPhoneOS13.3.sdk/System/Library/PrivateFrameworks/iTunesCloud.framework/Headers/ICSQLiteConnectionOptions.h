/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSString;

@interface ICSQLiteConnectionOptions : NSObject <Swift>

{
    _Bool _readOnly;
    NSString *_databasePath;
    long long _cacheSize;
}

@property (copy, nonatomic) NSString *databasePath;
@property (nonatomic) long long cacheSize;
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
