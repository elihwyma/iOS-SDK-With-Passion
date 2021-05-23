/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <CallKit/CXCallDirectoryLabeledPhoneNumberEntryData.h>

#import <CallKit/Swift-Protocol.h>

@class NSMutableData, NSMutableDictionary;

@interface CXCallDirectoryMutableLabeledPhoneNumberEntryData : CXCallDirectoryLabeledPhoneNumberEntryData <Swift>

{
    NSMutableData *_mutablePhoneNumberData;
    NSMutableData *_mutableLabelData;
    NSMutableDictionary *_labelToLabelDataOffset;
}

@property (retain, nonatomic) NSMutableData *mutablePhoneNumberData;
@property (retain, nonatomic) NSMutableData *mutableLabelData;
@property (retain, nonatomic) NSMutableDictionary *labelToLabelDataOffset;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (_Bool)appendPhoneNumber:(long long)arg1 label:(id)arg2;

@end
