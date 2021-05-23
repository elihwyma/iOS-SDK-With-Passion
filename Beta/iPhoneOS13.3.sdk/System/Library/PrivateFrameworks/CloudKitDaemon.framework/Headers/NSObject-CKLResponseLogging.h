/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NSObject (CKLResponseLogging)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)CKLogToFileHandle:(id)arg1;
- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;

@end
