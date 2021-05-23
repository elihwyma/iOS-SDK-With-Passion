/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol NUAdSettings;

@interface NUAdControllerFactory : NSObject

{
    id <NUAdSettings> _settings;
}

@property (nonatomic, readonly) id <NUAdSettings> settings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithSettings:(id)arg1;
- (id)createAdControllerForProvider:(id)arg1 document:(id)arg2 viewport:(id)arg3;

@end
