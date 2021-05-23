/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FCSectionSupergroupKnobs : NSObject

{
    _Bool _isEligible;
    NSString *_nameOverride;
    double _rankMultiplier;
}

@property (nonatomic) _Bool isEligible;
@property (nonatomic, readonly) NSString *nameOverride;
@property (nonatomic, readonly) double rankMultiplier;

- (id)initWithJSONString:(id)arg1;
- (id)initWithJSONData:(id)arg1;

@end
