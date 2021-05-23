/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFSettingsConnection, NSString;

@interface AFSettingsConnectionServiceDelegate : NSObject

{
    AFSettingsConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (oneway void)syncVerificationPartialResult:(id)arg1;
- (oneway void)syncVerificationServerReport:(id)arg1;
- (id)initWithSettingsConnection:(id)arg1;

@end
