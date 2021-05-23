/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSDictionary, NSString, NSURL;

@interface SFURLImage <Swift>

{
    NSURL *_urlValue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy) NSData *imageData;
@property (nonatomic) _Bool isTemplate;
@property (nonatomic) _Bool shouldCropToCircle;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double scale;
@property (nonatomic) struct CGSize size;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSString *keyColor;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) int source;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;
@property (copy, nonatomic) NSURL *urlValue;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithProtobuf:(id)arg1;

@end
