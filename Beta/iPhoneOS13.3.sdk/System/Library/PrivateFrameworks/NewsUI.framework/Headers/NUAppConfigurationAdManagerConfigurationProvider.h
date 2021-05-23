/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol FCNewsAppConfigurationManager;

@interface NUAppConfigurationAdManagerConfigurationProvider : NSObject

{
    id <FCNewsAppConfigurationManager> _appConfigurationManager;
}

@property (nonatomic, readonly) id <FCNewsAppConfigurationManager> appConfigurationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)fetchConfigurationWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithAppConfigurationManager:(id)arg1;

@end
