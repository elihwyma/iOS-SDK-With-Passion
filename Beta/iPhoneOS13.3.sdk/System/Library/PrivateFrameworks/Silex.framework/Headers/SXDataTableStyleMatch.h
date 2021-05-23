/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class SXDataTableElementStyle, SXJSONDataTableSelector;

@interface SXDataTableStyleMatch : NSObject

{
    SXDataTableElementStyle *_style;
    SXJSONDataTableSelector *_selector;
}

@property (nonatomic, readonly) SXDataTableElementStyle *style;
@property (nonatomic, readonly) SXJSONDataTableSelector *selector;

+ (id)matchWithStyle:(id)arg1 andSelector:(id)arg2;

- (id)initWithStyle:(id)arg1 andSelector:(id)arg2;

@end
