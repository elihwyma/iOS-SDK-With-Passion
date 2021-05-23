/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ISURLCacheConfiguration : NSObject

{
    unsigned long long _diskCapacity;
    unsigned long long _memoryCapacity;
    NSString *_persistentIdentifier;
}

@property (nonatomic) unsigned long long diskCapacity;
@property (nonatomic) unsigned long long memoryCapacity;
@property (copy, nonatomic) NSString *persistentIdentifier;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
