/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXComponentInsertionConditionEngine;

@interface SXDebugComponentInserter : NSObject

{
    id <SXComponentInsertionConditionEngine> _conditionEngine;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <SXComponentInsertionConditionEngine> conditionEngine;
@property (nonatomic, readonly) unsigned long long componentTraits;

- (id)conditionsForDOMObjectProvider:(id)arg1;
- (_Bool)validateMarker:(id)arg1 DOMObjectProvider:(id)arg2 layoutProvider:(id)arg3;
- (id)componentInsertForMarker:(id)arg1 DOMObjectProvider:(id)arg2 layoutProvider:(id)arg3;

@end
