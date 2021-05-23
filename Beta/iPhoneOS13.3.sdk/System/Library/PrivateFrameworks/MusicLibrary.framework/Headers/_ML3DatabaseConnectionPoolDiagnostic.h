/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface _ML3DatabaseConnectionPoolDiagnostic : NSObject

{
    NSArray *_readerAvailableConnections;
    NSArray *_readerBusyConnections;
    NSArray *_writerAvailableConnections;
    NSArray *_writerBusyConnections;
}

@property (nonatomic, readonly) NSArray *readerAvailableConnections;
@property (nonatomic, readonly) NSArray *readerBusyConnections;
@property (nonatomic, readonly) NSArray *writerAvailableConnections;
@property (nonatomic, readonly) NSArray *writerBusyConnections;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)_copyWithZone:(struct _NSZone *)arg1 usingConcreteClass:(Class)arg2;

@end
