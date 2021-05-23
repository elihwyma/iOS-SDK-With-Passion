/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface NFNdefMessage : NSObject

{
    NSMutableArray *_records;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *records;

+ (_Bool)supportsSecureCoding;

- (id)initWithBytes:(const void *)arg1 length:(unsigned int)arg2;
- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)asData;
- (void)addRecord:(id)arg1;
- (id)decode;
- (id)initWithNDEFMessage:(id)arg1;
- (void)addRecordArray:(id)arg1;

@end
