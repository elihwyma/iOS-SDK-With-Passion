/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <Foundation/NSObject.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSDictionary, NSString, NSURL;

@interface SFProduct : NSObject <Swift>

{
    struct {
        unsigned int buyable:1;
    } _has;
    _Bool _buyable;
    NSString *_identifier;
    NSString *_productIdentifier;
    NSURL *_availabilityURL;
    NSString *_displayName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *productIdentifier;
@property (copy, nonatomic) NSURL *availabilityURL;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) _Bool buyable;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (_Bool)hasBuyable;

@end
