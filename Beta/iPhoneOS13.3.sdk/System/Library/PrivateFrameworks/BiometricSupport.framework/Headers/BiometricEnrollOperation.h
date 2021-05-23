/*
 Image: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
 */

@interface BiometricEnrollOperation

{
    CDStruct_143f644f _authData;
    unsigned int _userID;
    unsigned int _processedFlags;
}

@property (nonatomic) unsigned int userID;
@property (nonatomic, readonly) CDStruct_143f644f *authData;
@property (nonatomic) unsigned int processedFlags;

- (id)init;
- (int)type;
- (unsigned int)cancelledMessage;

@end
