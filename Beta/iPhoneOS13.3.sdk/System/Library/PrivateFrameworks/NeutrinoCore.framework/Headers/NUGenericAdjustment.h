/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUAdjustment.h>

@class NSDictionary, NSMutableDictionary;

@interface NUGenericAdjustment : NUAdjustment

{
    NSMutableDictionary *_settings;
}

@property (copy, nonatomic) NSDictionary *settings;

- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)initWithAdjustmentSchema:(id)arg1;

@end
