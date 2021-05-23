/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSString;

@interface FCManagedResourceConfiguration : NSObject <Swift>

{
    NSString *_resourceID;
    long long _refreshRate;
}

@property (copy, nonatomic, readonly) NSString *resourceID;
@property (nonatomic, readonly) long long refreshRate;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResourceID:(id)arg1 refreshRate:(long long)arg2;

@end
