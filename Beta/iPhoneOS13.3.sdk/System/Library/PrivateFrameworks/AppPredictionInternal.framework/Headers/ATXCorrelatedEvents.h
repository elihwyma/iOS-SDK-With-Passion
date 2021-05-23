/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class ATXDuetEvent;

@interface ATXCorrelatedEvents : NSObject

{
    ATXDuetEvent *_firstEvent;
    ATXDuetEvent *_secondEvent;
}

@property (nonatomic, readonly) ATXDuetEvent *firstEvent;
@property (nonatomic, readonly) ATXDuetEvent *secondEvent;

- (id)initWithFirstEvent:(id)arg1 secondEvent:(id)arg2;

@end
