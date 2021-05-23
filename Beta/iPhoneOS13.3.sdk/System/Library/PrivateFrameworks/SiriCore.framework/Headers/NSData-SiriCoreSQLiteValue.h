/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

#import <Foundation/NSData.h>

@class NSString;

@interface NSData (SiriCoreSQLiteValue)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)siriCoreSQLiteValue_type;
- (const void *)siriCoreSQLiteValue_blobRepresentationWithLength:(unsigned long long *)arg1;
- (id)siriCoreSQLiteValue_toString;
- (id)siriCoreSQLiteValue_toNumber;
- (id)siriCoreSQLiteValue_escapedString:(_Bool)arg1;
- (id)siriCoreSQLiteValue_toData;

@end
