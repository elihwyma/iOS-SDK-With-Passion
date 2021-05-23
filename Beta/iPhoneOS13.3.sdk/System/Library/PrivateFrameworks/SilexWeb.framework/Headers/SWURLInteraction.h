/*
 Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@protocol SWNavigationManager;

@interface SWURLInteraction : NSObject

{
    NSURL *_URL;
    id <SWNavigationManager> _navigationManager;
}

@property (nonatomic, readonly) id <SWNavigationManager> navigationManager;
@property (nonatomic, readonly) NSURL *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long type;

- (_Bool)isEqual:(id)arg1;
- (void)perform;
- (id)initWithURL:(id)arg1 navigationManager:(id)arg2;

@end
