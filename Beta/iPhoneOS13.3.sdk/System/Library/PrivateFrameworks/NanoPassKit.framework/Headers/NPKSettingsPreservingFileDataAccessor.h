/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <PassKitCore/PKFileDataAccessor.h>

@class NPKCompanionAgentConnection, NSString;

@interface NPKSettingsPreservingFileDataAccessor : PKFileDataAccessor

{
    NPKCompanionAgentConnection *_connection;
    NSString *_objectUniqueID;
}

@property (retain, nonatomic) NPKCompanionAgentConnection *connection;
@property (retain, nonatomic) NSString *objectUniqueID;

- (void)updateSettings:(unsigned long long)arg1;

@end
