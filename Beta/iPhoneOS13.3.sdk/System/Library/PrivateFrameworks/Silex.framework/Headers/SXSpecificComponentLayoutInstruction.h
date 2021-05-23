/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SXSpecificComponentLayoutInstruction : NSObject

{
    NSString *_componentIdentifier;
}

@property (nonatomic, readonly) NSString *componentIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)instructionWithIdentifier:(id)arg1;

- (_Bool)isFulfilledForBlueprint:(id)arg1;

@end
