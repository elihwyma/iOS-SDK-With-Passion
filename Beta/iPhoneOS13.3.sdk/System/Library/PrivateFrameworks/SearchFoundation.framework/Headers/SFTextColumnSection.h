/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <Foundation/NSObject.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface SFTextColumnSection : NSObject <Swift>

{
    struct {
        unsigned int textNoWrap:1;
        unsigned int textWeight:1;
    } _has;
    _Bool _textNoWrap;
    NSArray *_textLines;
    unsigned long long _textWeight;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *textLines;
@property (nonatomic) _Bool textNoWrap;
@property (nonatomic) unsigned long long textWeight;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (_Bool)hasTextNoWrap;
- (_Bool)hasTextWeight;

@end
