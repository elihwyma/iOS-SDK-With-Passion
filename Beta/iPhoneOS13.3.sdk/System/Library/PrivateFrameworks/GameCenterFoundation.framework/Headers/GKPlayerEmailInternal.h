/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString;

@interface GKPlayerEmailInternal : GKInternalRepresentation

{
    NSString *_address;
    NSString *_addressSHA1;
    NSString *_addressPrefix;
    _Bool _verified;
}

@property (retain, nonatomic) NSString *address;
@property (retain, nonatomic) NSString *addressSHA1;
@property (retain, nonatomic) NSString *addressPrefix;
@property (nonatomic) _Bool verified;

+ (_Bool)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
