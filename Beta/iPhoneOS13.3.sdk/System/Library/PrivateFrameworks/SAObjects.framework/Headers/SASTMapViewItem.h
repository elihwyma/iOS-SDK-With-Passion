/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

@class NSDate, NSNumber, NSString, SALocation;

@protocol SASTTemplateAction;

@interface SASTMapViewItem : AceObject

@property (retain, nonatomic) id <SASTTemplateAction> action;
@property (copy, nonatomic) NSString *extSessionGuid;
@property (copy, nonatomic) NSDate *extSessionGuidCreatedTimestamp;
@property (retain, nonatomic) SALocation *location;
@property (copy, nonatomic) NSNumber *zoomLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)mapViewItem;
+ (id)mapViewItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
