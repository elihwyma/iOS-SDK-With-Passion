/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXAdvertisingSettingsFactory, SXComponentInsertionConditionEngine;

@interface SXAdComponentInserter : NSObject

{
    id <SXComponentInsertionConditionEngine> _conditionEngine;
    id <SXAdvertisingSettingsFactory> _advertisingSettingsFactory;
    long long _insertedCount;
    double _lastInsertedYOffset;
}

@property (nonatomic, readonly) id <SXAdvertisingSettingsFactory> advertisingSettingsFactory;
@property (nonatomic) long long insertedCount;
@property (nonatomic) double lastInsertedYOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <SXComponentInsertionConditionEngine> conditionEngine;
@property (nonatomic, readonly) unsigned long long componentTraits;

- (unsigned long long)adTypeFromBannerType:(unsigned long long)arg1;
- (id)conditionsForDOMObjectProvider:(id)arg1;
- (_Bool)validateMarker:(id)arg1 DOMObjectProvider:(id)arg2 layoutProvider:(id)arg3;
- (id)componentInsertForMarker:(id)arg1 DOMObjectProvider:(id)arg2 layoutProvider:(id)arg3;
- (id)cacheValidatorForCache:(id)arg1 DOMObjectProvider:(id)arg2;
- (void)componentInsertionCompleted;
- (id)initWithConditionEngine:(id)arg1 advertisingSettingsFactory:(id)arg2;

@end
