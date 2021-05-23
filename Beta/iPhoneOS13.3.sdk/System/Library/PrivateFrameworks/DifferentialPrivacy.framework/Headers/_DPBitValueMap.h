/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@class NSDictionary, NSString;

@interface _DPBitValueMap : NSObject

{
    NSString *_key;
    NSDictionary *_map;
}

@property (copy, nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) NSDictionary *map;

+ (void)initialize;
+ (id)bitValueMapForKey:(id)arg1;
+ (id)bitValueMapForKey:(id)arg1 fromConfigurationsFile:(id)arg2;
+ (id)bitValueMapForKey:(id)arg1 bitValueMapsDirectory:(id)arg2;
+ (void)removeBitValueMapForKey:(id)arg1;

- (id)init;
- (id)bitValueForString:(id)arg1;
- (id)initWithKey:(id)arg1 bitValueMapsDirectory:(id)arg2;

@end
