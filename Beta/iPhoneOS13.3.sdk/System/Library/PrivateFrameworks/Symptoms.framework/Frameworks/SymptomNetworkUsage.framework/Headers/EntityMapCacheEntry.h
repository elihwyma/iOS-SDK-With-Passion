/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
 */

#import <Foundation/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface EntityMapCacheEntry : NSObject

{
    NSDate *_expiryTime;
    NSObject *_entityName;
}

@property (retain) NSDate *expiryTime;
@property (retain) NSObject *entityName;

- (id)description;

@end
