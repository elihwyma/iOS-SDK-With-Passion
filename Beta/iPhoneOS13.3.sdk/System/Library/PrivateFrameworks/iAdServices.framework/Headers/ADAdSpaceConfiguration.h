/*
 Image: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString, NSURL;

@interface ADAdSpaceConfiguration : NSObject

{
    int _creativeType;
    float _containerWidth;
    float _containerHeight;
    float _reorientedContainerWidth;
    float _reorientedContainerHeight;
    long long _options;
    NSString *_identifier;
    NSURL *_serverURL;
    NSString *_advertisingSection;
    NSString *_authenticationUserName;
    NSSet *_context;
    NSString *_adSpaceContextJSON;
}

@property (nonatomic) int creativeType;
@property (nonatomic) long long options;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSURL *serverURL;
@property (retain, nonatomic) NSString *advertisingSection;
@property (retain, nonatomic) NSString *authenticationUserName;
@property (copy, nonatomic) NSSet *context;
@property (copy, nonatomic) NSString *adSpaceContextJSON;
@property (nonatomic) float containerWidth;
@property (nonatomic) float containerHeight;
@property (nonatomic) float reorientedContainerWidth;
@property (nonatomic) float reorientedContainerHeight;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
