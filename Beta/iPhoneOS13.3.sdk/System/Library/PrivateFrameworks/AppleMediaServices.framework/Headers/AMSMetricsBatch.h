/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class ACAccount, NSArray, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface AMSMetricsBatch : NSObject

{
    _Bool _containsLoadURL;
    ACAccount *_account;
    NSString *_canaryIdentifier;
    NSArray *_droppedEvents;
    NSArray *_eventDictionaries;
    NSArray *_events;
    NSURL *_reportURL;
    NSArray *_skippedEvents;
}

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSString *canaryIdentifier;
@property (nonatomic) _Bool containsLoadURL;
@property (retain, nonatomic) NSArray *droppedEvents;
@property (retain, nonatomic) NSArray *eventDictionaries;
@property (retain, nonatomic) NSArray *events;
@property (retain, nonatomic) NSURL *reportURL;
@property (retain, nonatomic) NSArray *skippedEvents;

@end
