/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <TextInput/TIPreferencesController.h>

@class NSString, NSXPCConnection;

@interface TIPreferencesControllerClient : TIPreferencesController

{
    NSXPCConnection *_connection;
    _Bool _writeable;
    _Bool _isValid;
    NSString *_machName;
}

@property (retain, nonatomic) NSString *machName;
@property (nonatomic) _Bool isValid;

+ (id)sharedPreferencesController;
+ (id)serviceInterface;

- (id)init;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (void)_disconnect;
- (void)updateInputModes:(id)arg1;
- (void)_pushValue:(id)arg1 toPreference:(id)arg2 domain:(id)arg3;
- (void)performWithWriteability:(_Bool)arg1 operations:(CDUnknownBlockType)arg2;
- (void)createConnectionIfNecessary;

@end
