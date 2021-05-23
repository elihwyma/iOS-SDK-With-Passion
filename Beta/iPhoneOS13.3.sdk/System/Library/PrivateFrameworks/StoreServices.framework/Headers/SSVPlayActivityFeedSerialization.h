/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSString;

@interface SSVPlayActivityFeedSerialization : NSObject

{
    NSString *_currentStoreFrontID;
}

@property (copy, nonatomic) NSString *currentStoreFrontID;

+ (id)defaultOverrideHTTPHeaderFields;

- (id)propertyListObjectWithPlayActivityEvent:(id)arg1;

@end
