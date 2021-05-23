/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

#import <FrontBoard/Swift-Protocol.h>

@class FBMainDisplayLayoutPublisher, FBSDisplayLayoutElement, NSString;

@protocol BSInvalidatable;

@interface FBDisplayLayoutElement : NSObject <Swift>

{
    FBMainDisplayLayoutPublisher *_publisher;
    Class _elementClass;
    NSString *_identifier;
    NSString *_key;
    FBSDisplayLayoutElement *_element;
    long long _displayType;
    id <BSInvalidatable> _activeAssertion;
}

@property (nonatomic, readonly) long long displayType;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) FBSDisplayLayoutElement *element;
@property (nonatomic, readonly) Class elementClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)activate;
- (void)deactivate;
- (id)initWithDisplayType:(long long)arg1 identifier:(id)arg2 elementClass:(Class)arg3;
- (void)activateWithBuilder:(CDUnknownBlockType)arg1;
- (void)updateWithBuilder:(CDUnknownBlockType)arg1;

@end
