/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface CSEvent : NSObject

{
    _Bool _consumable;
    long long _type;
    NSNumber *_value;
}

@property (nonatomic) long long type;
@property (nonatomic, getter=isConsumable) _Bool consumable;
@property (retain, nonatomic) NSNumber *value;

+ (id)eventWithType:(long long)arg1;

- (id)description;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;

@end
