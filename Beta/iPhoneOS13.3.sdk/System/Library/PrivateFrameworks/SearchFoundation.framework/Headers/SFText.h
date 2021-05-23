/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <Foundation/NSObject.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface SFText : NSObject <Swift>

{
    struct {
        unsigned int maxLines:1;
    } _has;
    NSString *_text;
    unsigned long long _maxLines;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy) NSString *text;
@property (nonatomic) unsigned long long maxLines;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

+ (_Bool)supportsSecureCoding;
+ (id)textWithString:(id)arg1;

- (unsigned long long)length;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (id)initWithProtobuf:(id)arg1;
- (_Bool)hasMaxLines;

@end
