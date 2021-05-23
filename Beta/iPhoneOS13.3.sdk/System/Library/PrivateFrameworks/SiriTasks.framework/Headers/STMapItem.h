/*
 Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

#import <AssistantServices/STSiriModelObject.h>

@class CLLocation, NSData, NSNumber, NSString;

@interface STMapItem : STSiriModelObject

{
    NSString *_title;
    CLLocation *_location;
    NSData *_placeData;
    _Bool _isCurrentLocation;
    NSNumber *_businessID;
    NSNumber *_localSearchProviderID;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_aceContextObjectValue;
- (Class)_aceCollectionClass;
- (id)initWithMKMapItem:(id)arg1;

@end
