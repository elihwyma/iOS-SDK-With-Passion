/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _ML3ValidatableDatabase : NSObject

{
    unsigned long long _queueID;
    NSString *_databasePath;
    unsigned long long _validationState;
    NSObject<OS_dispatch_queue> *_validationSerialQueue;
}

@property (copy, nonatomic) NSString *databasePath;
@property (nonatomic) unsigned long long validationState;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *validationSerialQueue;

- (id)init;
- (id)initWithDatabasePath:(id)arg1;
- (_Bool)currentQueueIsValidationQueue;

@end
