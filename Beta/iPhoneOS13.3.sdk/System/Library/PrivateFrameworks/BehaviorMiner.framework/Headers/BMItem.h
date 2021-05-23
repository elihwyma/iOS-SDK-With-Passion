/*
 Image: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
 */

#import <Foundation/NSObject.h>

@class BMItemType, NSString;

@interface BMItem : NSObject

{
    BMItemType *_type;
    NSString *_normalizedValue;
}

@property (retain, nonatomic) BMItemType *type;
@property (copy, nonatomic) NSString *normalizedValue;
@property (copy, nonatomic, readonly) id value;

+ (id)itemWithType:(id)arg1 stringValue:(id)arg2;
+ (id)itemWithType:(id)arg1 numberValue:(id)arg2;
+ (id)itemWithType:(id)arg1 UUIDValue:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(id)arg1 value:(id)arg2;
- (id)initWithType:(id)arg1 normalizedValue:(id)arg2;
- (id)uniformIdentifier;

@end
