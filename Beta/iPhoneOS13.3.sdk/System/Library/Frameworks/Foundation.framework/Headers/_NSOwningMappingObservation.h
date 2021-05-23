/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/_NSConcreteObservation.h>

@class NSObservation, NSString;

__attribute__((visibility("hidden")))
@interface _NSOwningMappingObservation : _NSConcreteObservation

{
    NSObservation *_ownedObservation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setObservation:(id)arg1;

@end
