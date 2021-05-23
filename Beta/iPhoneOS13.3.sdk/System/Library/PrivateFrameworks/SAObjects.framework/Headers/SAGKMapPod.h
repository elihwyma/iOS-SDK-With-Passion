/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAGKPodView.h>

@class NSNumber, SALocation, SAUIAppPunchOut;

@interface SAGKMapPod : SAGKPodView

@property (retain, nonatomic) SALocation *location;
@property (retain, nonatomic) SAUIAppPunchOut *punchOut;
@property (copy, nonatomic) NSNumber *showButton;
@property (copy, nonatomic) NSNumber *zoomLevel;

+ (id)mapPod;
+ (id)mapPodWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
