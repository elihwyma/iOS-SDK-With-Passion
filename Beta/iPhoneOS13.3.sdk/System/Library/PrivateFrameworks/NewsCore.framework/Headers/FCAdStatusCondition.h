/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FCAdStatusCondition : NSObject

{
    unsigned long long _type;
    NSString *_identifier;
}

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *identifier;

+ (id)adStatusConditionsFromConditionsArray:(id)arg1;

- (id)initWithStatusConditionType:(unsigned long long)arg1 identifier:(id)arg2;

@end
