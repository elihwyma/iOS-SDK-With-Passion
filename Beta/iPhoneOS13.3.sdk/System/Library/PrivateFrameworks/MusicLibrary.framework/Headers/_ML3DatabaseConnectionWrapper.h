/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class ML3DatabaseConnection, NSThread;

@interface _ML3DatabaseConnectionWrapper : NSObject

{
    ML3DatabaseConnection *_connection;
    NSThread *_owningThread;
    NSThread *_borrowingThread;
    unsigned long long _useCount;
}

@property (retain, nonatomic) ML3DatabaseConnection *connection;
@property (retain, nonatomic) NSThread *owningThread;
@property (retain, nonatomic) NSThread *borrowingThread;
@property (nonatomic) unsigned long long useCount;

- (id)description;
- (id)initWithConnection:(id)arg1;

@end
