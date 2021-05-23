/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HMBulletinObjectTuple : NSObject

{
    NSString *_queryName;
    NSString *_uuidString;
}

@property (nonatomic, readonly) NSString *queryName;
@property (nonatomic, readonly) NSString *uuidString;

+ (id)tupleWithQueryType:(long long)arg1 uuidString:(id)arg2;

- (id)initWithQueryType:(long long)arg1 uuidString:(id)arg2;

@end
