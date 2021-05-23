/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXIssueCoverLayoutAttributesFactory;

@interface SXIssueCoverComponentSizerFactory : NSObject

{
    id <SXIssueCoverLayoutAttributesFactory> _layoutOptionsFactory;
}

@property (nonatomic, readonly) id <SXIssueCoverLayoutAttributesFactory> layoutOptionsFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) int role;

- (id)sizerForComponent:(id)arg1 componentLayout:(id)arg2 layoutOptions:(id)arg3 DOMObjectProvider:(id)arg4;
- (id)initWithLayoutAttributesFactory:(id)arg1;

@end
