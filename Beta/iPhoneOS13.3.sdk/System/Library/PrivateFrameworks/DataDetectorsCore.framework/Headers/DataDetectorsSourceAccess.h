/*
 Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
 */

#import <Foundation/NSObject.h>

@interface DataDetectorsSourceAccess : NSObject

{
    CDStruct_4c969caf _auditToken;
    int _clientpid;
    unsigned int _clientuid;
    _Bool _privacyUserReadEntitled;
    unsigned char _privacyUserReadEntitlementChecked;
    _Bool _privacyUserWriteEntitled;
    unsigned char _privacyUserWriteEntitlementChecked;
    _Bool _privacySystemWriteEntitled;
    unsigned char _privacySystemWriteEntitlementChecked;
}

@property CDStruct_4c969caf auditToken;
@property int processIdentifier;
@property unsigned int userIdentifier;

- (void)fileForSourceRead:(id)arg1 resourceType:(unsigned long long)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)filesForSourceRead:(id)arg1 resourceType:(unsigned long long)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)writeSourceFromJSONFile:(id)arg1 source:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)writeSourceFromRawData:(id)arg1 source:(id)arg2 signature:(id)arg3 withReply:(CDUnknownBlockType)arg4;
- (_Bool)privacyUserReadEntitled;
- (_Bool)privacyUserWriteEntitled;
- (_Bool)privacySystemWriteEntitled;
- (id)fileHandleForSourceRead:(int)arg1 resourceType:(unsigned long long)arg2;
- (_Bool)clientCanWriteSource:(int)arg1;
- (_Bool)pushSourcesContent:(id)arg1 forSource:(int)arg2 signature:(id)arg3;

@end
