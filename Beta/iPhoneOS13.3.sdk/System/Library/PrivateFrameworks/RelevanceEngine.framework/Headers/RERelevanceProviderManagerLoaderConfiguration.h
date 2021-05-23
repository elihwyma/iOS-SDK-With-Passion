/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface RERelevanceProviderManagerLoaderConfiguration : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (Class)desiredClassForLoader;
- (Class)desiredClassFromBundle:(id)arg1 forKey:(id)arg2;

@end
