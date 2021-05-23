/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKDiscoveryShelf.h>

@class NSString;

@interface PKDiscoveryTextBlockShelf : PKDiscoveryShelf

{
    long long _style;
    NSString *_bodyKey;
    NSString *_ledeKey;
    NSString *_sectionHeaderLineKey;
    NSString *_localizedBody;
    NSString *_localizedLede;
    NSString *_localizedSectionHeaderLine;
}

@property (retain, nonatomic) NSString *localizedBody;
@property (retain, nonatomic) NSString *localizedLede;
@property (retain, nonatomic) NSString *localizedSectionHeaderLine;
@property (nonatomic, readonly) long long style;
@property (nonatomic, readonly) NSString *bodyKey;
@property (nonatomic, readonly) NSString *ledeKey;
@property (nonatomic, readonly) NSString *sectionHeaderLineKey;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)localizeWithBundle:(id)arg1;
- (void)localizeWithBundle:(id)arg1 table:(id)arg2;

@end
