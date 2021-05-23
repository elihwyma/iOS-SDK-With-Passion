/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SCRCThreadKey : NSObject

{
    unsigned long long _threadID;
    NSString *_threadDescription;
}

@property (nonatomic, readonly) unsigned long long threadID;
@property (nonatomic, readonly) NSString *threadDescription;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithObject:(id)arg1;
- (id)initWithDescription:(id)arg1;
- (id)_initWithThreadID:(unsigned long long)arg1 description:(id)arg2;
- (id)_allCurrentThreadIDs;

@end
