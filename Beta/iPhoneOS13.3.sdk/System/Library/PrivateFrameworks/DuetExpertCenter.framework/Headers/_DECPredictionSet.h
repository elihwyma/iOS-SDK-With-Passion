/*
 Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface _DECPredictionSet : NSObject

{
    NSMutableDictionary *_predictionSet;
}

@property (nonatomic, readonly, getter=allValues) NSArray *allValues;

+ (id)createFromResult:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)objectForKey:(struct NSString *)arg1;
- (id)objectForKeyedSubscript:(struct NSString *)arg1;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(struct NSString *)arg2;

@end
