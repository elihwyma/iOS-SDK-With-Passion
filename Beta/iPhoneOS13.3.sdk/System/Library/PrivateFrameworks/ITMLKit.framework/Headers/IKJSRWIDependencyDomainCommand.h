/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKJSRWIDependencyDomain, NSArray, NSString;

@interface IKJSRWIDependencyDomainCommand : NSObject

{
    NSString *_name;
    NSString *_purpose;
    IKJSRWIDependencyDomain *_domain;
    NSArray *_params;
    NSArray *_returns;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *purpose;
@property (weak, nonatomic, readonly) IKJSRWIDependencyDomain *domain;
@property (nonatomic, readonly) NSArray *params;
@property (nonatomic, readonly) NSArray *returns;

- (_Bool)isValidWithError:(id *)arg1;
- (id)selectorString;
- (id)initWithCommandDictionary:(id)arg1 forDomain:(id)arg2;

@end
