/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXSubscriptionButtonTextProviding;

@interface SXSubscriptionButtonComponentTextProvider : NSObject

{
    id <SXSubscriptionButtonTextProviding> _textProvider;
}

@property (nonatomic, readonly) id <SXSubscriptionButtonTextProviding> textProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)textForComponent:(id)arg1;
- (id)initWithTextProvider:(id)arg1;

@end
