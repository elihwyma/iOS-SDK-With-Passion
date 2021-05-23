/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXIssueCoverLayoutAttributesFactory;

@interface SXIssueCoverViewProvider : NSObject

{
    id <SXIssueCoverLayoutAttributesFactory> _layoutOptionsFactory;
}

@property (nonatomic, readonly) id <SXIssueCoverLayoutAttributesFactory> layoutOptionsFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithLayoutAttributesFactory:(id)arg1;
- (id)viewForIssueCover:(id)arg1;
- (void)presentIssueCover:(id)arg1 onView:(id)arg2 options:(id)arg3;

@end
