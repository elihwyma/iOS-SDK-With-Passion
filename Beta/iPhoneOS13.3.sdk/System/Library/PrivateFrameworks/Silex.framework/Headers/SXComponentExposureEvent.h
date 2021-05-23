/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXAnalyticsEvent.h>

@class NSDictionary, NSString;

@interface SXComponentExposureEvent : SXAnalyticsEvent

{
    NSString *_componentIdentifier;
    NSString *_componentType;
    NSString *_componentRole;
    NSDictionary *_metaData;
}

@property (nonatomic, readonly) NSString *componentIdentifier;
@property (nonatomic, readonly) NSString *componentType;
@property (nonatomic, readonly) NSString *componentRole;
@property (nonatomic, readonly) NSDictionary *metaData;

- (id)description;
- (id)initWithComponent:(id)arg1;

@end
