/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <Foundation/NSObject.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSDictionary, NSString, SFImage, SFPunchout;

@interface SFAppLink : NSObject <Swift>

{
    struct {
        unsigned int imageAlign:1;
    } _has;
    int _imageAlign;
    NSString *_title;
    SFPunchout *_appPunchout;
    SFImage *_image;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) SFPunchout *appPunchout;
@property (retain, nonatomic) SFImage *image;
@property (nonatomic) int imageAlign;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (_Bool)hasImageAlign;

@end
