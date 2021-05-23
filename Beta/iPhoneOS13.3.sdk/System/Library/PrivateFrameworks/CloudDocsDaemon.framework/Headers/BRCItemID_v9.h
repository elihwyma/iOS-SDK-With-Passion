/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class BRCALRowID, NSString;

__attribute__((visibility("hidden")))
@interface BRCItemID_v9 : NSObject

{
    BRCALRowID *_appLibraryRowID;
    unsigned char _kind;
    unsigned char _uuid[16];
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)newFromSqliteValue:(struct sqlite3_value *)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUUID:(const char *)arg1;
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;
- (id)initWithRootObject:(struct RootItemObject *)arg1;
- (id)itemIDString;
- (id)initWithUUIDObject:(struct _UUIDItemObject_OLD *)arg1;
- (id)_initAsLibraryRootWithAppLibraryRowID:(id)arg1 enclosureUUID:(id)arg2;

@end
