/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWStillImageConditionalRouterConfiguration.h>

@class NSArray;

@interface BWStillImageConditionalRouterUBConfiguration : BWStillImageConditionalRouterConfiguration

{
    NSArray *_portTypes;
}

@property (nonatomic, readonly) NSArray *portTypes;

+ (id)configurationWithPortTypes:(id)arg1;

- (void)dealloc;
- (id)initWithPortTypes:(id)arg1;
- (unsigned long long)outputIndexForPortType:(id)arg1;

@end
