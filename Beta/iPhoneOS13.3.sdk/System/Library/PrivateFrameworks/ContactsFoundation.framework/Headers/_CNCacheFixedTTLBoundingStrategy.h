/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@protocol CNTimeProvider;

@interface _CNCacheFixedTTLBoundingStrategy : NSObject

{
    double _ttl;
    id <CNTimeProvider> _timeProvider;
    NSMutableDictionary *_timestamps;
}

@property (nonatomic, readonly) double ttl;
@property (nonatomic, readonly) id <CNTimeProvider> timeProvider;
@property (nonatomic, readonly) NSMutableDictionary *timestamps;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithTTL:(double)arg1;
- (id)initWithTTL:(double)arg1 timeProvider:(id)arg2;
- (_Bool)shouldEvictKey:(id)arg1;
- (void)willUpdateCacheBy:(unsigned long long)arg1 forKey:(id)arg2 keysToEvict:(id *)arg3;
- (void)willAccessKey:(id)arg1;

@end
