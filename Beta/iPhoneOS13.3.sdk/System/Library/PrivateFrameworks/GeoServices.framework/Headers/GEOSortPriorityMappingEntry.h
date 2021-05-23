/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@interface GEOSortPriorityMappingEntry : NSObject

{
    long long _priority;
    long long _resultType;
    long long _resultSubtype;
}

@property (nonatomic, readonly) long long priority;
@property (nonatomic, readonly) long long resultType;
@property (nonatomic, readonly) long long resultSubtype;

- (id)init;
- (id)initWithPriority:(long long)arg1 resultType:(long long)arg2 resultSubtype:(long long)arg3;

@end
