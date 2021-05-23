/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSPredicate, NSString;

@interface HKInteractiveChartOverlayPredicate : NSObject

{
    NSPredicate *_predicate;
    NSString *_localizedNameKey;
}

@property (nonatomic, readonly) NSPredicate *predicate;
@property (nonatomic, readonly) NSString *localizedNameKey;

- (id)initWithPredicate:(id)arg1 name:(id)arg2;

@end
