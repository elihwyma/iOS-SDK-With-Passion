/*
 Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SWNavigationManager;

@interface SWInteractionFactory : NSObject

{
    id <SWNavigationManager> _navigationManager;
}

@property (nonatomic, readonly) id <SWNavigationManager> navigationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)interactionForDictionary:(id)arg1;
- (id)initWithNavigationManager:(id)arg1;

@end
