/*
 Image: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
 */

#import <Foundation/NSObject.h>

#import <CoreNFC/Swift-Protocol.h>

@class NSArray;

@interface NFCNDEFMessage : NSObject <Swift>

{
    NSArray *_records;
}

@property (copy, nonatomic) NSArray *records;
@property (nonatomic, readonly) unsigned long long length;

+ (_Bool)supportsSecureCoding;
+ (_Bool)_validateRecords:(id)arg1 fromOriginal:(id)arg2;
+ (id)_getPayloadsFromNDEFRecords:(id)arg1;
+ (id)ndefMessageWithData:(id)arg1;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)asData;
- (id)_initWithRecords:(id)arg1;
- (id)initWithEmptyNdefMessage;
- (id)initWithNDEFRecords:(id)arg1;
- (id)initWithNFNdefMessage:(id)arg1;
- (id)_getURLsFromNDEFMessage:(id)arg1;

@end
