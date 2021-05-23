/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXPresentationAttributesProvider;

@interface SXLayoutInstructionFactory : NSObject

{
    id <SXPresentationAttributesProvider> _presentationAttributesProvider;
}

@property (nonatomic, readonly) id <SXPresentationAttributesProvider> presentationAttributesProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)createInstructions;
- (id)initWithPresentationAttributesProvider:(id)arg1;

@end
