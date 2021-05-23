/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class ML3DatabaseConnection, ML3DatabaseModule, ML3DatabaseTable, NSString;

@protocol ML3VirtualTableDelegate;

@interface ML3VirtualTable : NSObject

{
    NSString *_virtualTableName;
    ML3DatabaseModule *_module;
    id <ML3VirtualTableDelegate> _delegate;
    ML3DatabaseTable *_databaseTable;
    ML3DatabaseConnection *_connection;
    shared_ptr_c3e79333 _dataSource;
}

@property (nonatomic) shared_ptr_c3e79333 dataSource;
@property (weak, nonatomic) id <ML3VirtualTableDelegate> delegate;
@property (nonatomic, readonly) ML3DatabaseTable *databaseTable;
@property (nonatomic, readonly) ML3DatabaseConnection *connection;
@property (nonatomic, readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id).cxx_construct;
- (_Bool)unregister;
- (_Bool)registerWithConnection:(id)arg1;
- (id)initWithDatabaseTable:(id)arg1;

@end
