/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class ML3LanguageResources;

@protocol OS_dispatch_queue;

@interface ML3LanguageResourceManager : NSObject

{
    ML3LanguageResources *_cachedResources;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (retain, nonatomic) ML3LanguageResources *cachedResources;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, readonly) ML3LanguageResources *resources;

+ (id)sharedResourceManager;

- (id)_init;
- (void)invalidateCachedResources;
- (id)_buildLanguageResources;

@end
