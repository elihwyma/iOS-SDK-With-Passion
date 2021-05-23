/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/Swift-Protocol.h>

@protocol SXComponentInsertionConditionEngine;

@protocol SXComponentInserter <Swift>

@property (nonatomic, readonly) id <SXComponentInsertionConditionEngine> conditionEngine;
@property (nonatomic, readonly) unsigned long long componentTraits;

- (unsigned short)conditionsForDOMObjectProvider: /* Error: Ran out of types for this method. */;
- (unsigned short)validateMarker:DOMObjectProvider:layoutProvider: /* Error: Ran out of types for this method. */;
- (unsigned short)componentInsertForMarker:DOMObjectProvider:layoutProvider: /* Error: Ran out of types for this method. */;

@end
