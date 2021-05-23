/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface MTInMemoryDefaults : NSObject

{
    NSMutableDictionary *_storage;
}

@property (retain, nonatomic) NSMutableDictionary *storage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (float)floatForKey:(id)arg1;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1 defaultValue:(id)arg2;

@end
