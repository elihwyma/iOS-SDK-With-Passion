/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDictionary, NSString;

@interface PKPassField : NSObject <Swift>

{
    NSString *_value;
    long long _type;
    NSString *_key;
    NSString *_label;
    id _unformattedValue;
    NSString *_changeMessage;
    long long _textAlignment;
    long long _cellStyle;
    unsigned long long _row;
    unsigned long long _dataDetectorTypes;
    NSDictionary *_semantics;
    long long _foreignReferenceType;
    NSString *_foreignReferenceIdentifier;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *label;
@property (weak, readonly) NSString *value;
@property (nonatomic) unsigned long long row;
@property (copy, nonatomic) id unformattedValue;
@property (copy, nonatomic) NSString *changeMessage;
@property (nonatomic) long long textAlignment;
@property (nonatomic) unsigned long long dataDetectorTypes;
@property (copy, nonatomic) NSDictionary *semantics;
@property (nonatomic) long long cellStyle;
@property (nonatomic) long long foreignReferenceType;
@property (retain, nonatomic) NSString *foreignReferenceIdentifier;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)flushCachedValue;

@end
