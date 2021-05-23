/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

#import <Foundation/NSNull.h>

@class NSString;

@interface NSNull (SiriCoreSQLiteValue)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)siriCoreSQLiteValue_type;
- (id)siriCoreSQLiteValue_toString;
- (id)siriCoreSQLiteValue_toNumber;
- (id)siriCoreSQLiteValue_escapedString:(_Bool)arg1;
- (id)siriCoreSQLiteValue_toData;

@end
