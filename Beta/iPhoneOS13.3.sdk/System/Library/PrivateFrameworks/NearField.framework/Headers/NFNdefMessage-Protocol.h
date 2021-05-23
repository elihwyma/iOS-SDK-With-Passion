/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <NearField/Swift-Protocol.h>

@class NSArray;

@protocol NFNdefMessage <Swift>

@property (nonatomic, readonly) NSArray *records;

- (unsigned short)initWithBytes:length: /* Error: Ran out of types for this method. */;
- (unsigned short)asData;
- (unsigned short)addRecord: /* Error: Ran out of types for this method. */;
- (unsigned short)decode;
- (unsigned short)initWithNDEFMessage: /* Error: Ran out of types for this method. */;
- (unsigned short)addRecordArray: /* Error: Ran out of types for this method. */;

@end
