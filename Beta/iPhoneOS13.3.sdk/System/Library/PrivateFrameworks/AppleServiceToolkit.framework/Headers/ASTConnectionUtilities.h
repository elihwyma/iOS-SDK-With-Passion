/*
 Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

#import <Foundation/NSObject.h>

@interface ASTConnectionUtilities : NSObject

+ (_Bool)isGzipEnabled;
+ (_Bool)isValidResponse:(id)arg1;
+ (_Bool)didEncounterNetworkDisconnectionError:(id)arg1;
+ (_Bool)trustIsValidWithProtectionSpace:(id)arg1 rootOfTrust:(unsigned long long)arg2;
+ (id)MD5HeaderValueForTask:(id)arg1;
+ (_Bool)relaxTimeouts;
+ (id)getServerLoggingSelection;
+ (_Bool)useChunkedTransferEncoding;
+ (unsigned long long)allowCellularSizeThreshold;

@end
