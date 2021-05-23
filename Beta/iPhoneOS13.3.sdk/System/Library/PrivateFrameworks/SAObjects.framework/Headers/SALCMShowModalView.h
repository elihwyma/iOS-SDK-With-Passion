/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAAceView;

@interface SALCMShowModalView : SABaseClientBoundCommand

@property (retain, nonatomic) SAAceView *view;

+ (id)showModalView;
+ (id)showModalViewWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
