/*
 Image: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
 */

#import <NSObject.h>

@class RPPeopleDiscovery;

@interface _PSProximityBooster : NSObject

{
    RPPeopleDiscovery *_peopleDiscovery;
}

@property (retain, nonatomic) RPPeopleDiscovery *peopleDiscovery;

- (id)init;
- (void)startMonitoringProximity;
- (void)stopMonitoringProximity;
- (id)suggestionsByBoostingNearbySuggestions:(id)arg1;

@end
