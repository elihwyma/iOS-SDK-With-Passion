/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@interface EDPersistenceDatabaseGenerationWindow : NSObject

{
    long long _earliestGeneration;
    long long _latestGeneration;
}

@property (nonatomic, readonly) long long earliestGeneration;
@property (nonatomic, readonly) long long latestGeneration;

- (id)init;
- (void)insertGeneration:(long long)arg1;

@end
