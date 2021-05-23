/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TPSPersonalization : NSObject

{
    unsigned long long _providerID;
    unsigned long long _personalizationID;
    NSString *_defaultString;
    NSString *_originalPersonalizedScheme;
    NSString *_suggestedString;
}

@property (nonatomic) unsigned long long providerID;
@property (nonatomic) unsigned long long personalizationID;
@property (retain, nonatomic) NSString *defaultString;
@property (retain, nonatomic) NSString *originalPersonalizedScheme;
@property (nonatomic, readonly) NSString *identifier;
@property (retain, nonatomic) NSString *suggestedString;

- (_Bool)isEqual:(id)arg1;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPersonalizedScheme:(id)arg1;

@end
