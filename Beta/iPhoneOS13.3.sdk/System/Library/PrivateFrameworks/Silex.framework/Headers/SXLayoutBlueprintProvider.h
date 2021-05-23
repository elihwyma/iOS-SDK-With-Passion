/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXLayoutBlueprint;

@interface SXLayoutBlueprintProvider : NSObject

{
    SXLayoutBlueprint *blueprint;
}

@property (retain, nonatomic) SXLayoutBlueprint *blueprint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)updateBlueprint:(id)arg1;

@end
