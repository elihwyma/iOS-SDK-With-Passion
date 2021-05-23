/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDAssertion.h>

@class NSSet;

@interface _HDEventsCollectionAssertion : HDAssertion

{
    NSSet *_eventCollectors;
}

@property (retain, nonatomic) NSSet *eventCollectors;

- (id)initWithOwnerIdentifier:(id)arg1;

@end
