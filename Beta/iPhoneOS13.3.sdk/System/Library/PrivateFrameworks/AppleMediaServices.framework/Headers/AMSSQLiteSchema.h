/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSSQLiteConnection;

__attribute__((visibility("hidden")))
@interface AMSSQLiteSchema : NSObject

{
    AMSSQLiteConnection *_connection;
}

@property (readonly) long long currentUserVersion;

- (id)initWithConnection:(id)arg1;
- (void)_setUserVersion:(long long)arg1;
- (_Bool)column:(id)arg1 existsInTable:(id)arg2;
- (_Bool)migrateToVersion:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)tableExists:(id)arg1;

@end
