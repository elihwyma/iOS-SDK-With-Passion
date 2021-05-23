/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <ClockKit/CLKTextProvider.h>

@class NSString;

@interface NTKOverrideTextProvider : CLKTextProvider

{
    NSString *_text;
    CDUnknownBlockType _overrideBlock;
}

@property (copy, nonatomic) CDUnknownBlockType overrideBlock;
@property (copy, nonatomic) NSString *text;

+ (id)textProviderWithText:(id)arg1 overrideBlock:(CDUnknownBlockType)arg2;
+ (id)_dashTrackingTextProviderWithDashes:(id)arg1 tracking:(double)arg2 weight:(double)arg3;
+ (id)_dashTrackingTextProviderWithDashes:(id)arg1 tracking:(double)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2;

@end
