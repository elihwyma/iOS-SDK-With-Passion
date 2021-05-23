/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDQueryServer, NSString;

@interface _HDQueryDatabaseAccessBlock : NSObject

{
    CDUnknownBlockType _block;
    HDQueryServer *_queryServer;
    NSString *_processBundleIdentifier;
    long long _qualityOfService;
    double _creationTime;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType block;
@property (weak, nonatomic, readonly) HDQueryServer *queryServer;
@property (copy, nonatomic, readonly) NSString *processBundleIdentifier;
@property (nonatomic, readonly) long long qualityOfService;
@property (nonatomic, readonly) double creationTime;
@property (nonatomic, readonly) _Bool shouldThrottle;

- (id)description;
- (id)initWithBlock:(CDUnknownBlockType)arg1 queryServer:(id)arg2;
- (_Bool)shouldRunAfterBlock:(id)arg1 foregroundBundleIdentifiers:(id)arg2;

@end
