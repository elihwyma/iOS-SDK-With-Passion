/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

#import <Foundation/NSNumber.h>

@class NSString;

@interface NSNumber (SiriCoreSQLiteValue)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)siriCoreSQLiteValue_type;
- (double)siriCoreSQLiteValue_doubleRepresentation;
- (long long)siriCoreSQLiteValue_integerRepresentation;
- (id)siriCoreSQLiteValue_toString;
- (id)siriCoreSQLiteValue_toNumber;
- (id)siriCoreSQLiteValue_escapedString:(_Bool)arg1;
- (id)siriCoreSQLiteValue_toData;

@end
