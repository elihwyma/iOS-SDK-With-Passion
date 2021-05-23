/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <Foundation/NSObject.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSDictionary, NSString, NSURL;

@interface SFUserActivityInfo : NSObject <Swift>

{
    struct {
        unsigned int valueType:1;
    } _has;
    int _valueType;
    NSString *_key;
    NSString *_stringValue;
    NSURL *_urlValue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) int valueType;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *stringValue;
@property (copy, nonatomic) NSURL *urlValue;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (_Bool)hasValueType;

@end
