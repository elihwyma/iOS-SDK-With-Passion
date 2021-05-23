/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <NearField/NFSession.h>

@class NSString;

@interface NFSeshatSession : NFSession

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isTransientError:(CDStruct_c0454aff)arg1;

- (CDStruct_c0454aff)allocateSlot:(unsigned char)arg1 authorizingUser:(unsigned char)arg2 authorizingUserToken:(id)arg3 outToken:(id *)arg4 outWriteCount:(unsigned int *)arg5;
- (CDStruct_c0454aff)derive:(unsigned char)arg1 userHash:(id)arg2 outData:(id *)arg3 outWriteCount:(unsigned int *)arg4;
- (CDStruct_c0454aff)resetCounter:(unsigned char)arg1 userToken:(id)arg2 outWriteCount:(unsigned int *)arg3;
- (CDStruct_c0454aff)authorizeUpdate:(_Bool)arg1 slotIndex:(unsigned char)arg2 userToken:(id)arg3 outWriteCount:(unsigned int *)arg4;
- (CDStruct_c0454aff)deleteSlot:(unsigned char)arg1 outWriteCount:(unsigned int *)arg2;
- (CDStruct_c0454aff)upgradeKey:(unsigned char)arg1 inputData:(id)arg2 outWriteCount:(unsigned int *)arg3;
- (CDStruct_c0454aff)getData:(id *)arg1 updateKUD:(char *)arg2 outWriteLimit:(unsigned int *)arg3 outWriteCount:(unsigned int *)arg4;
- (CDStruct_c0454aff)obliterate;
- (CDStruct_c0454aff)getHash:(id *)arg1;

@end
