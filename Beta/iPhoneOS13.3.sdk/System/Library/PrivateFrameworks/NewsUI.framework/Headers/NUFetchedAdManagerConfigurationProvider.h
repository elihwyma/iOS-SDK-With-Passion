/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol NUAdManagerConfiguration;

@interface NUFetchedAdManagerConfigurationProvider : NSObject

{
    NSObject<NUAdManagerConfiguration> *_configuration;
}

@property (copy, nonatomic, readonly) NSObject<NUAdManagerConfiguration> *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (void)fetchConfigurationWithCompletion:(CDUnknownBlockType)arg1;

@end
