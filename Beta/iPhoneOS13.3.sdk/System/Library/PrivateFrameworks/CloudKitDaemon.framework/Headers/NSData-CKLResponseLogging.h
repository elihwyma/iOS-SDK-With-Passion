/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSData.h>

@class NSString;

@interface NSData (CKLResponseLogging)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;

@end
